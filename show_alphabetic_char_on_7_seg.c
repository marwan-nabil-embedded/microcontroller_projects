#define pin_number 8
int numbers[8]={1,3,15,13,12,14,4,5};

/*********************************/
void setup() {
  
  for (int pin = 0; pin <= pin_number; pin++) {
    pinMode(numbers[pin], OUTPUT); 
  }
  
}
/********************************/
/*0,1,2,3,4,5,6,7,8,9*/
void num_0(){ //00111111
short num_0_binary[pin_number]={0,0,1,1,1,1,1,1};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], num_0_binary[(pin_number-1)-i]);  
}
}
/*********************************/
void num_1(){ //00000110
short num_1_binary[pin_number]={0,0,0,0,0,1,1,0};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], num_1_binary[(pin_number-1)-i]);  
}
}
/*********************************/
void num_2(){ //01011011
short num_2_binary[pin_number]={0,1,0,1,1,0,1,1};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], num_2_binary[(pin_number-1)-i]);  
}
}
/*******************************/
void num_3(){ //01001111
short num_3_binary[pin_number]={0,1,0,0,1,1,1,1};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], num_3_binary[(pin_number-1)-i]);  
}
}
/*******************************/
void num_4(){ //01100110
short num_4_binary[pin_number]={0,1,1,0,0,1,1,0};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], num_4_binary[(pin_number-1)-i]);  
}
}
/*********************************/
void num_5(){ //01101101
short num_5_binary[pin_number]={0,1,1,0,1,1,0,1};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], num_5_binary[(pin_number-1)-i]);  
}
}
/********************************/
void num_6(){ //01111101
short num_6_binary[pin_number]={0,1,1,1,1,1,0,1};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], num_6_binary[(pin_number-1)-i]);  
}
}
/*********************************/
void num_7(){ //00000111
short num_7_binary[pin_number]={0,0,0,0,0,1,1,1};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], num_7_binary[(pin_number-1)-i]);  
}
}
/********************************/
void num_8(){ //01111111
short num_8_binary[pin_number]={0,1,1,1,1,1,1,1};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], num_8_binary[(pin_number-1)-i]);  
}
}
/********************************/
void num_9(){ //01101111
short num_9_binary[pin_number]={0,1,1,0,1,1,1,1};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], num_9_binary[(pin_number-1)-i]);  
}
}
/********************************/
/*A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, and Z*/
void letter_A() { //most bit(pin 7) 01110111 least bit (pin0)
short letter_A_binary[pin_number]={0,1,1,1,0,1,1,1};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], letter_A_binary[(pin_number-1)-i]);  
}
}
/************************************************************************************/
void letter_B() { //most bit(pin 7) 01111111 least bit (pin0)
short letter_B_binary[pin_number]={0,1,1,1,1,1,1,1};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], letter_B_binary[(pin_number-1)-i]);  
}
}
/************************************************************************************/
void letter_C() { //most bit(pin 7) 00111001 least bit (pin0)
short letter_C_binary[pin_number]={0,0,1,1,1,0,0,1};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], letter_C_binary[(pin_number-1)-i]);  
}
}
/************************************************************************************/
void letter_D() { //most bit(pin 7) 01011110 least bit (pin0)
short letter_D_binary[pin_number]={0,1,0,1,1,1,1,0};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], letter_D_binary[(pin_number-1)-i]);  
}
}
/************************************************************************************/
void letter_E() { //most bit(pin 7) 01111001 least bit (pin0)
short letter_E_binary[pin_number]={0,1,1,1,1,0,0,1};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], letter_E_binary[(pin_number-1)-i]);  
}
}
/************************************************************************************/
void letter_F() { //most bit(pin 7) 01110001 least bit (pin0)
short letter_F_binary[pin_number]={0,1,1,1,0,0,0,1};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], letter_F_binary[(pin_number-1)-i]);  
}
} 
/************************************************************************************/
void letter_G() { //most bit(pin 7) 10000000 least bit (pin0)  cant represent it
short letter_G_binary[pin_number]={1,0,0,0,0,0,0,0};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], letter_G_binary[(pin_number-1)-i]);  
}
} 
/************************************************************************************/
void letter_H() { //most bit(pin 7) 01110110 least bit (pin0)
short letter_H_binary[pin_number]={0,1,1,1,0,1,1,0};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], letter_H_binary[(pin_number-1)-i]);  
}
} 
/************************************************************************************/
void letter_I() { //most bit(pin 7) 00000110 least bit (pin0)
short letter_I_binary[pin_number]={0,0,0,0,0,1,1,0};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], letter_I_binary[(pin_number-1)-i]);  
}
}
/************************************************************************************/
void letter_J() { //most bit(pin 7) 00011110 least bit (pin0)
short letter_J_binary[pin_number]={0,0,0,1,1,1,1,0};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], letter_J_binary[(pin_number-1)-i]);  
}
}
/************************************************************************************/
void letter_K() { //most bit(pin 7) 10000000 least bit (pin0)  cant represent it
short letter_K_binary[pin_number]={1,0,0,0,0,0,0,0};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], letter_K_binary[(pin_number-1)-i]);  
}
}
/************************************************************************************/
void letter_L() { //most bit (pin 7) 00111000 least bit (pin0)  
short letter_L_binary[pin_number]={0,0,1,1,1,0,0,0};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], letter_L_binary[(pin_number-1)-i]);  
}
}
/************************************************************************************/
void letter_M() { //most bit (pin 7) 10000000 least bit (pin0)  cant represent it
short letter_M_binary[pin_number]={1,0,0,0,0,0,0,0};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], letter_M_binary[(pin_number-1)-i]);  
}
}
/************************************************************************************/

void letter_N() { //most bit (pin 7) 10000000 least bit (pin0)  cant represent it
short letter_N_binary[pin_number]={1,0,0,0,0,0,0,0};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], letter_N_binary[(pin_number-1)-i]);  
}
}
/************************************************************************************/
void letter_O() { //most bit (pin 7) 01011100 least bit (pin0)  
short letter_O_binary[pin_number]={0,1,0,1,1,1,0,0};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], letter_O_binary[(pin_number-1)-i]);  
}
} 
/************************************************************************************/
void letter_P() { //most bit (pin 7) 01110011 least bit (pin0)
short letter_P_binary[pin_number]={0,1,0,1,1,1,0,0};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], letter_P_binary[(pin_number-1)-i]);  
}
}
/************************************************************************************/
void letter_Q() { //most bit (pin 7) 01100111 least bit (pin0)
short letter_Q_binary[pin_number]={0,1,1,0,0,1,1,1};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], letter_Q_binary[(pin_number-1)-i]);  
}
} //
/************************************************************************************/
void letter_R() { //most bit (pin 7) 10000000 least bit (pin0)  cant represent it
short letter_R_binary[pin_number]={1,0,0,0,0,0,0,0};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], letter_R_binary[(pin_number-1)-i]);  
}
}//
/************************************************************************************/
void letter_S() { //most bit (pin 7) 01101101 least bit (pin0) 
short letter_S_binary[pin_number]={0,1,1,0,1,1,0,1};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], letter_S_binary[(pin_number-1)-i]);  
}
}
/************************************************************************************/
void letter_T() { //most bit (pin 7) 01111000 least bit (pin0) 
short letter_T_binary[pin_number]={0,1,1,1,1,0,0,0};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], letter_T_binary[(pin_number-1)-i]);  
}
}
/************************************************************************************/
void letter_U() { //most bit (pin 7) 00111110 least bit (pin0) 
short letter_U_binary[pin_number]={0,0,1,1,1,1,1,0};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], letter_U_binary[(pin_number-1)-i]);  
}
}
/************************************************************************************/
void letter_V() { //most bit (pin 7) 00111110 least bit (pin0) 
short letter_V_binary[pin_number]={0,0,1,1,1,1,1,0};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], letter_V_binary[(pin_number-1)-i]);  
}
}
/************************************************************************************/
void letter_W() { //most bit (pin 7) 10000000 least bit (pin0) 
short letter_W_binary[pin_number]={1,0,0,0,0,0,0,0};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], letter_W_binary[(pin_number-1)-i]);  
}
}//01110110
/************************************************************************************/
void letter_X() { //most bit (pin 7) 01110110 least bit (pin0) 
short letter_X_binary[pin_number]={0,1,1,1,0,1,1,0};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], letter_X_binary[(pin_number-1)-i]);  
}
}
/************************************************************************************/
void letter_Y() { //most bit (pin 7) 01101110 least bit (pin0) 
short letter_Y_binary[pin_number]={0,1,1,0,1,1,1,0};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], letter_Y_binary[(pin_number-1)-i]);  
}
}
/************************************************************************************/
void letter_Z() { //most bit (pin 7) 01011011 least bit (pin0) 
short letter_Z_binary[pin_number]={0,1,0,1,1,0,1,1};
for(short i=0;i<pin_number;i++){
digitalWrite(numbers[i], letter_Z_binary[(pin_number-1)-i]);  
}
}
/************************************************************************************/
 void (*function_ptr[36])(void) = {
                                    num_0,num_1,num_2,num_3,num_4,num_5,num_6,num_7,num_8,num_9,
                                    letter_A, letter_B, letter_C,letter_D,letter_E,letter_F,letter_G,
                                    letter_H,letter_I,letter_J,letter_K,letter_L,letter_M,letter_N,
                                    letter_O,letter_P,letter_Q,letter_R,letter_S,letter_T,letter_U,
                                    letter_V,letter_W,letter_X,letter_Y,letter_Z
                                    };
/************************************************************************************/

void loop() {
  // put your main code here, to run repeatedly:
  for(short y=0;y<36;y++){
    function_ptr[y] ();
    delay(1500);
  }
}
