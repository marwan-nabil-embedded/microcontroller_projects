#include <dummy.h>
#include <Wire.h> 
/*********************************/
void setup() {
  // Configure GPIO pins from GPIO0 to GPIO15 as output
  for (int pin = 0; pin <= 15; pin++) {
    pinMode(pin, OUTPUT);

  }
}
/********************************/
/*A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, and Z*/
void letter_A() { //most bit(pin 15) 10001000 11001111 least bit (pin0)
short letter_A_binary[16]={1,0,0,0,1,0,0,0,1,1,0,0,1,1,1,1};
for(short i=0;i<16;i++){
digitalWrite(i, letter_A_binary[15-i]);  
}
}
/************************************************************************************/
void letter_B() { //most bit(pin 15) 00101010 00111111 least bit (pin0)
short letter_B_binary[16]={0,0,1,0,1,0,1,0,0,0,1,1,1,1,1,1};
for(short i=0;i<16;i++){
digitalWrite(i, letter_B_binary[15-i]);  
}
}
/************************************************************************************/
void letter_C() { //most bit(pin 15)  00000000 11110011 least bit (pin0)
short letter_C_binary[16]={0,0,0,0,0,0,0,0 ,1,1,1,1,0,0,1,1};
for(short i=0;i<16;i++){
digitalWrite(i, letter_C_binary[15-i]);  
}
}
/************************************************************************************/
void letter_D() { //most bit(pin 15)  00100010 00111111 least bit (pin0)
short letter_D_binary[16]={0,0,1,0,0,0,1,0,0,0,1,1,1,1,1,1};
for(short i=0;i<16;i++){
digitalWrite(i, letter_D_binary[15-i]);  
}
}
/************************************************************************************/
void letter_E() { //most bit(pin 15) 10001000 11110011 least bit (pin0)
short letter_E_binary[16]={1,0,0,0,1,0,0,0 ,1,1,1,1,0,0,1,1};
for(short i=0;i<16;i++){
digitalWrite(i, letter_E_binary[15-i]);  
}
}
/************************************************************************************/
void letter_F() { //most bit(pin 15)  10001000 11000011 least bit (pin0)
short letter_F_binary[16]={1,0,0,0,1,0,0,0 ,1,1,0,0,0,0,1,1};
for(short i=0;i<16;i++){
digitalWrite(i, letter_F_binary[15-i]);  
}
}
/************************************************************************************/
void letter_G() { //most bit(pin 15) 00001000 11111011 least bit (pin0)
short letter_G_binary[16]={0,0,0,0,1,0,0,0 ,1,1,1,1,1,0,1,1};
for(short i=0;i<16;i++){
digitalWrite(i, letter_G_binary[15-i]);  
}
}
/************************************************************************************/
void letter_H() { //most bit(pin 15) 1000100011001100 least bit (pin0)
short letter_H_binary[16]={1,0,0,0,1,0,0,0,1,1,0,0,1,1,0,0};
for(short i=0;i<16;i++){
digitalWrite(i, letter_H_binary[15-i]);  
}
}
/************************************************************************************/
void letter_I() { //most bit(pin 15) 00100010 00110011 least bit (pin0)
short letter_I_binary[16]={0,0,1,0,0,0,1,0, 0,0,1,1,0,0,1,1};
for(short i=0;i<16;i++){
digitalWrite(i, letter_I_binary[15-i]);  
}
}
/************************************************************************************/
void letter_J() { //most bit(pin 15) 0000000 0111100 least bit (pin0)
short letter_J_binary[16]={0,0,0,0,0,0,0, 0,1,1,1,1,0,0};
for(short i=0;i<16;i++){
digitalWrite(i, letter_J_binary[15-i]);  
}
}
/************************************************************************************/
void letter_K() { //most bit(pin 15) 10010100 11000000 least bit (pin0)
short letter_K_binary[16]={1,0,0,1,0,1,0,0, 1,1,0,0,0,0,0,0};
for(short i=0;i<16;i++){
digitalWrite(i, letter_K_binary[15-i]);  
}
}
/************************************************************************************/
void letter_L() { //most bit(pin 15) 00000000 11110000 least bit (pin0)
short letter_L_binary[16]={0,0,0,0,0,0,0,0 ,1,1,1,1,0,0,0,0};
for(short i=0;i<16;i++){
digitalWrite(i, letter_L_binary[15-i]);  
}
}
/************************************************************************************/
void letter_M() { //most bit(pin 15) 00000101 11001100 least bit (pin0)
short letter_M_binary[16]={0,0,0,0,0,1,0,1 ,1,1,0,0,1,1,0,0};
for(short i=0;i<16;i++){
digitalWrite(i, letter_M_binary[15-i]);  
}
}
/************************************************************************************/

void letter_N() { //most bit(pin 15) 00010001 11001100 least bit (pin0)
short letter_N_binary[16]={0,0,0,1,0,0,0,1, 1,1,0,0,1,1,0,0};
for(short i=0;i<16;i++){
digitalWrite(i, letter_N_binary[15-i]);  
}
}
/************************************************************************************/
void letter_O() { //most bit(pin 15) 00000000 11111111 least bit (pin0)
short letter_O_binary[16]={0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1};
for(short i=0;i<16;i++){
digitalWrite(i, letter_O_binary[15-i]);  
}
}
/************************************************************************************/
void letter_P() { //most bit(pin 15) 10001000 11000111 least bit (pin0)
short letter_P_binary[16]={1,0,0,0,1,0,0,0, 1,1,0,0,0,1,1,1};
for(short i=0;i<16;i++){
digitalWrite(i, letter_P_binary[15-i]);  
}
}
/************************************************************************************/
void letter_Q() { //most bit(pin 15) 00010000 11111111 least bit (pin0)
short letter_Q_binary[16]={0,0,0,1,0,0,0,0, 1,1,1,1,1,1,1,1};
for(short i=0;i<16;i++){
digitalWrite(i, letter_Q_binary[15-i]);  
}
}
/************************************************************************************/
void letter_R() { //most bit(pin 15) 10011000 11000111 least bit (pin0)
short letter_R_binary[16]={1,0,0,1,1,0,0,0, 1,1,0,0,0,1,1,1};
for(short i=0;i<16;i++){
digitalWrite(i, letter_R_binary[15-i]);  
}
}
/************************************************************************************/
void letter_S() { //most bit(pin 15) 10001000 10111011 least bit (pin0)
short letter_S_binary[16]={1,0,0,0,1,0,0,0 ,1,0,1,1,1,0,1,1};
for(short i=0;i<16;i++){
digitalWrite(i, letter_S_binary[15-i]);  
}
}
/************************************************************************************/
void letter_T() { //most bit(pin 15) 00100010 00000011 least bit (pin0)
short letter_T_binary[16]={0,0,1,0,0,0,1,0 ,0,0,0,0,0,0,1,1};
for(short i=0;i<16;i++){
digitalWrite(i, letter_T_binary[15-i]);  
}
}
/************************************************************************************/
void letter_U() { //most bit(pin 15) 00000000 11111100 least bit (pin0)
short letter_U_binary[16]={0,0,0,0,0,0,0,0, 1,1,1,1,1,1,0,0};
for(short i=0;i<16;i++){
digitalWrite(i, letter_U_binary[15-i]);  
}
}
/************************************************************************************/
void letter_V() { //most bit(pin 15) 01000100 11000000 least bit (pin0)
short letter_V_binary[16]={0,1,0,0,0,1,0,0, 1,1,0,0,0,0,0,0};
for(short i=0;i<16;i++){
digitalWrite(i, letter_V_binary[15-i]);  
}
}
/************************************************************************************/
void letter_W() { //most bit(pin 15) 01010000 11001100 least bit (pin0)
short letter_W_binary[16]={0,1,0,1,0,0,0,0, 1,1,0,0,1,1,0,0};
for(short i=0;i<16;i++){
digitalWrite(i, letter_W_binary[15-i]);  
}
}
/************************************************************************************/
void letter_X() { //most bit(pin 15) 01010101 00000000 least bit (pin0)
short letter_X_binary[16]={0,1,0,1,0,1,0,1 ,0,0,0,0,0,0,0,0};
for(short i=0;i<16;i++){
digitalWrite(i, letter_X_binary[15-i]);  
}
}
/************************************************************************************/
void letter_Y() { //most bit(pin 15) 10101000 10000100 least bit (pin0)
short letter_Y_binary[16]={1,0,1,0,1,0,0,0,1,0,0,0,0,1,0,0};
for(short i=0;i<16;i++){
digitalWrite(i, letter_Y_binary[15-i]);  
}
}
/************************************************************************************/
void letter_Z() { //most bit(pin 15) 01000100 00110011 least bit (pin0)
short letter_Z_binary[16]={0,1,0,0,0,1,0,0,0,0,1,1,0,0,1,1};
for(short i=0;i<16;i++){
digitalWrite(i, letter_Z_binary[15-i]);  
}
}
/************************************************************************************/
 void (*function_ptr[26])(void) = {letter_A, letter_B, letter_C,letter_D,letter_E,letter_F,letter_G,letter_H,letter_I,letter_J,letter_K,letter_L,letter_M,
 letter_N,letter_O,letter_P,letter_Q,letter_R,letter_S,letter_T,letter_U,letter_V,letter_W,letter_X,letter_Y,letter_Z};
/*---- array of function pointers ----*/
/************************************************************************************/

void loop() {
  // put your main code here, to run repeatedly:
  for(short y=0;y<26;y++){
    function_ptr[y] ();
    delay(1000);
  }
  



}
