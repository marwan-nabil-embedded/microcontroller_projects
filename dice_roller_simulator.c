/* 
 * File:   application.c
 * Author: Marwan nabil
 *
 * Created on december 12, 2023, 9:21 PM
 */
#define _XTAL_FREQ 4000000UL

#include<stdio.h>
#include<time.h> 
#include<stdlib.h>
#define HWREG8(_X)          (*((volatile uint8 *)(_X)))
typedef unsigned char       uint8;
typedef int                 Std_ReturnType;
#define BIT_MASK  (uint8)    1
#define PORT_PIN_MAX_NUMBER  8
#define PORT_MAX_NUMBER      5
#define PORTC_MASK           0xFF
#define E_OK                 1
#define E_NOT_OK             0
#define SET_BIT(REG, BIT_POSN)     (REG |= (BIT_MASK << BIT_POSN))
#define CLEAR_BIT(REG, BIT_POSN)   (REG &= ~(BIT_MASK << BIT_POSN))
#define TOGGLE_BIT(REG, BIT_POSN)  (REG ^= (BIT_MASK << BIT_POSN))
#define READ_BIT(REG, BIT_POSN)    ((REG >> BIT_POSN) & BIT_MASK)
#include"xc.h"
#include"../../include/pic18.h"
/* Reference to the Data Direction Control Registers */
volatile int *tris_registers[] = {&TRISA, &TRISB, &TRISC, &TRISD, &TRISE};
/* Reference to the Data Latch Register (Read and Write to Data Latch) */
volatile int *lat_registers[]  = {&LATA , &LATB , &LATC , &LATD , &LATE};
/* Reference to the Port Status Register  */
volatile int *port_registers[] = {&PORTA, &PORTB, &PORTC, &PORTD, &PORTE};
/**************************************************/
typedef enum{
    GPIO_LOW = 0,
    GPIO_HIGH
}logic_t;
typedef enum{
    GPIO_DIRECTION_OUTPUT = 0,
    GPIO_DIRECTION_INPUT
}direction_t;
typedef enum{
    GPIO_PIN0 = 0,
    GPIO_PIN1,
    GPIO_PIN2,
    GPIO_PIN3,
    GPIO_PIN4,
    GPIO_PIN5,
    GPIO_PIN6,
    GPIO_PIN7
}pin_index_t;
typedef enum{
    PORTA_INDEX = 0,
    PORTB_INDEX,
    PORTC_INDEX,
    PORTD_INDEX,
    PORTE_INDEX
}port_index_t;
typedef struct{
    uint8 port : 3;      /* @ref port_index_t */
    uint8 pin : 3;       /* @ref pin_index_t */
    uint8 direction : 1; /* @ref direction_t */
    uint8 logic : 1;     /* @ref logic_t */
}pin_config_t;
/***************************GPIO_functions*****************************/
Std_ReturnType gpio_pin_direction_intialize(const pin_config_t *_pin_config){
    Std_ReturnType ret = E_OK;
    if(NULL == _pin_config || _pin_config->pin > PORT_PIN_MAX_NUMBER-1){
        ret = E_NOT_OK;
    }
    else{
        switch(_pin_config->direction){
            case GPIO_DIRECTION_OUTPUT :
                CLEAR_BIT(*tris_registers[_pin_config->port], _pin_config->pin);
                break;
            case GPIO_DIRECTION_INPUT :
                SET_BIT(*tris_registers[_pin_config->port], _pin_config->pin);
                break;
            default : ret = E_NOT_OK;
        }
    }
    return ret;
}
Std_ReturnType gpio_pin_get_direction_status(const pin_config_t *_pin_config, direction_t *direction_status){
    Std_ReturnType ret = E_OK;
    if(NULL == _pin_config || NULL == direction_status || _pin_config->pin > PORT_PIN_MAX_NUMBER-1){
        ret = E_NOT_OK;
    }
    else{
        *direction_status = READ_BIT(*tris_registers[_pin_config->port], _pin_config->pin);
    }
    return ret;
}
Std_ReturnType gpio_pin_write_logic(const pin_config_t *_pin_config, logic_t logic){
    Std_ReturnType ret = E_OK;
    if(NULL == _pin_config || _pin_config->pin > PORT_PIN_MAX_NUMBER-1){
        ret = E_NOT_OK;
    }
    else{
        switch(logic){
            case GPIO_LOW :
                CLEAR_BIT(*lat_registers[_pin_config->port], _pin_config->pin);
                break;
            case GPIO_HIGH :
                SET_BIT(*lat_registers[_pin_config->port], _pin_config->pin);
                break;
            default : ret = E_NOT_OK;
        }
    }
    return ret;
}
Std_ReturnType gpio_pin_read_logic(const pin_config_t *_pin_config, logic_t *logic){
    Std_ReturnType ret = E_OK;
    if(NULL == _pin_config || NULL == logic || _pin_config->pin > PORT_PIN_MAX_NUMBER-1){
        ret = E_NOT_OK;
    }
    else{
        *logic = READ_BIT(*port_registers[_pin_config->port], _pin_config->pin);
    }
    return ret;
}
Std_ReturnType gpio_pin_intialize(const pin_config_t *_pin_config){
    Std_ReturnType ret = E_OK;
    if(NULL == _pin_config || _pin_config->pin > PORT_PIN_MAX_NUMBER-1){
        ret = E_NOT_OK;
    }
    else{
        ret = gpio_pin_direction_intialize(_pin_config);
        ret = gpio_pin_write_logic(_pin_config, _pin_config->logic);
    }
    return ret;
}
/************** ECU_seven_segment *************/
#define SEGEMENT_PIN0 0
#define SEGEMENT_PIN1 1
#define SEGEMENT_PIN2 2
#define SEGEMENT_PIN3 3
typedef enum{
    SEGMENT_COMMON_ANODE,
    SEGMENT_COMMON_CATHODE
}segment_type_t;
typedef struct{
    pin_config_t segment_pins[4];
    segment_type_t segment_type;
}segment_t;
int seven_segement_intialize(const segment_t *seg){
    int ret = 1;
    if(NULL == seg){
        ret = 0;
    }
    else{    
        ret = gpio_pin_intialize(&(seg->segment_pins[SEGEMENT_PIN0]));
        ret = gpio_pin_intialize(&(seg->segment_pins[SEGEMENT_PIN1]));
        ret = gpio_pin_intialize(&(seg->segment_pins[SEGEMENT_PIN2]));
        ret = gpio_pin_intialize(&(seg->segment_pins[SEGEMENT_PIN3]));
    }
    return ret;
}
int seven_segement_write_number(const segment_t *seg, int number){
    int ret = 1;
    if((NULL == seg) && (number > 9)){
        ret = 0;
    }
    else{    
        ret = gpio_pin_write_logic(&(seg->segment_pins[SEGEMENT_PIN0]), number & 0x01);
        ret = gpio_pin_write_logic(&(seg->segment_pins[SEGEMENT_PIN1]), (number>>1) & 0x01);
        ret = gpio_pin_write_logic(&(seg->segment_pins[SEGEMENT_PIN2]), (number>>2) & 0x01);
        ret = gpio_pin_write_logic(&(seg->segment_pins[SEGEMENT_PIN3]), (number>>3) & 0x01);
    }
    return ret;
}
/**************** main program ********************/
int main(){
    int ret=1; // store return value of function we call - 0 if there is problem 
    segment_t seg1={
      .segment_pins[SEGEMENT_PIN0].port=PORTD_INDEX,
      .segment_pins[SEGEMENT_PIN0].pin=GPIO_PIN1,
      .segment_pins[SEGEMENT_PIN0].logic=GPIO_LOW,
      .segment_pins[SEGEMENT_PIN0].direction=GPIO_DIRECTION_OUTPUT,
      .segment_pins[SEGEMENT_PIN1].port=PORTD_INDEX,
      .segment_pins[SEGEMENT_PIN1].pin=GPIO_PIN2,
      .segment_pins[SEGEMENT_PIN1].logic=GPIO_LOW,
      .segment_pins[SEGEMENT_PIN1].direction=GPIO_DIRECTION_OUTPUT,
      .segment_pins[SEGEMENT_PIN2].port=PORTD_INDEX,
      .segment_pins[SEGEMENT_PIN2].pin=GPIO_PIN3,
      .segment_pins[SEGEMENT_PIN2].logic=GPIO_LOW,
      .segment_pins[SEGEMENT_PIN2].direction=GPIO_DIRECTION_OUTPUT,
      .segment_pins[SEGEMENT_PIN3].port=PORTD_INDEX,
      .segment_pins[SEGEMENT_PIN3].pin=GPIO_PIN4,
      .segment_pins[SEGEMENT_PIN3].logic=GPIO_LOW,
      .segment_pins[SEGEMENT_PIN3].direction=GPIO_DIRECTION_OUTPUT,
      .segment_type=SEGMENT_COMMON_CATHODE
    };
   ret=seven_segement_intialize(&seg1);
   pin_config_t check={
       .direction=GPIO_DIRECTION_INPUT,
       .logic=GPIO_LOW,
       .pin=GPIO_PIN2,
       .port=PORTC_INDEX,
    };
   logic_t pin_value=0;
   srand(time(NULL));
   ret=gpio_pin_intialize(&check);
   int roll=0;
   while(1){
       uint8 test=0;
        roll=rand()%6+1;
        gpio_pin_read_logic(&check,&test);
        if(test==1){
            __delay_ms(100);// solve debouncing of push button
            seven_segement_write_number(&seg1,roll);
            __delay_ms(100); // solve debouncing of push button
        }  
    }
    return 0;
}