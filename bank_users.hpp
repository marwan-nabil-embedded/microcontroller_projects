#ifndef BANK_USERS_H
#define BANK_USERS_H
#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define ok   0
#define N_ok 1
#define admin_mode_0        121245
#define admin_mode_1        121244
#define garbage_value       555
using namespace std;
/**********************************************************************/
typedef enum {
    german=1,
    USA=2,
    canada=3,
    KSA=4,
    egypt=5,
}user_nationality;
/**************/
typedef enum {
    platitum=1,
    gold=2,
    silver=3,
    normal=4,
}user_card_type;
/**************/
 typedef enum {
    dollar=1,
    Canadian_dollar=2,
    euro=3,
    Saudi_riyal=4,
    Egyptian_pound=5,
 }currency;
/*********************************************************************/
/*_____bank_customer_data_____*/
typedef struct {
        string name;
        int number_id;
        float balance;
        int num_operations;
        int num_money_transfer;
        int password;
        user_nationality nationality;
        user_card_type card_type;
        currency money_currency;
                }customer_account;

/* function_declerations */

void view_menu();
static int who_is_user_id(int id,customer_account *customer[]);
static int who_is_user(int pass_word,customer_account *customer[]);
int check_password(int pass_word,customer_account *customer[]);
int check_balance(int pass_word,customer_account  *customer[]);
int money_deposit(int pass_word,customer_account  *customer[]);
int money_withdraw(int pass_word,customer_account *customer[]);
int money_transfer(int pass_word,customer_account *customer[]);
int money_exchange(int pass_word,customer_account *customer[]);


#endif // BANK_USERS_H
