/*
*   Author  : Marwan nabil ahmed
*   linkedin:www.linkedin.com/in/marwan-nabil-30341b264
*   briaf : Atm simulation (check balance , deposit , withdraw , showmenu
*                         , admin mode , make money transfer , money_exchange)
*          we have 6 customers in our bank marwan , Abu_Nawaf ,ali, Christina , john , alex
*/
#include"bank_users.hpp"
int main()
{

customer_account marwan;
marwan.name="marwan nabil";
marwan.number_id=11111;
marwan.balance=10000;
marwan.num_money_transfer=0;
marwan.num_operations=0;
marwan.password=1234;
marwan.nationality=egypt;
marwan.card_type=normal;
marwan.money_currency=Egyptian_pound;

/*********************************************/
customer_account ali;
ali.name="ali";
ali.number_id=88888;
ali.balance=16000;
ali.num_money_transfer=0;
ali.num_operations=0;
ali.password=1235;
ali.nationality=egypt;
ali.card_type=normal;
ali.money_currency=Egyptian_pound;
/*******************************************/
customer_account Abu_Nawaf;
Abu_Nawaf.name="Abu_Nawaf";
Abu_Nawaf.number_id=22222;
Abu_Nawaf.balance=20000;
Abu_Nawaf.num_money_transfer=0;
Abu_Nawaf.num_operations=0;
Abu_Nawaf.password=4321;
Abu_Nawaf.nationality=KSA;
Abu_Nawaf.card_type=gold;
Abu_Nawaf.money_currency=Saudi_riyal;
/*******************************************/
customer_account Christina;
Christina.name="Christina";
Christina.number_id=33333;
Christina.balance=40000;
Christina.num_money_transfer=0;
Christina.num_operations=0;
Christina.password=1021;
Christina.nationality=german;
Christina.card_type=platitum;
Christina.money_currency=euro;
/*******************************************/
customer_account john;
john.name="john";
john.number_id=44444;
john.balance=15000;
john.num_money_transfer=0;
john.num_operations=0;
john.password=1121;
john.nationality=USA;
john.card_type=silver;
john.money_currency=dollar;
/*******************************************/
customer_account alex;
alex.name="alex";
alex.number_id=55555;
alex.balance=25000;
alex.num_money_transfer=0;
alex.num_operations=0;
alex.password=9874;
alex.nationality=canada;
alex.card_type=normal;
alex.money_currency=Canadian_dollar;
/*******************************************/
customer_account *ptr_users[6]={&(alex),&(john),&(Christina),&(Abu_Nawaf),&(marwan),&(ali)};

int pass_code{0};
    int option=garbage_value;
    int exit=garbage_value;
    int *ptr_exit=&exit;
while(1)
{

        option=garbage_value; // we put garbage if we dont options will remember the last number put in it
        exit=garbage_value; // if we dont write it the program will exit if you enter the password without press 0
        system("cls"); // clear screen for the second user
        cout<<"Enter your password: "<<endl;
        cin>>pass_code;
        if(pass_code==admin_mode_0) // admin mode: to refull the atm with money or fix it
        {
            cout<<"enter the other security key : ";
            int check_admin_mode_1;
            cin>>check_admin_mode_1;
            if(check_admin_mode_1==admin_mode_1)
            {
                system("cls");
                while(1)
                {
                cout<<"the safe is opened \n";
                cout<<"sorry unavilable \n";
                cin>>option;
                    if (option==666)
                    {
                    break;
                    }
                }
            }
        }
        if (check_password(pass_code,ptr_users)==ok){
    do{
            view_menu();
            cin>>option;
            switch (option){
                case 0:exit=0                              ;break;
                case 1:check_balance(pass_code,ptr_users)  ;break;
                case 2:money_deposit(pass_code,ptr_users)  ;break;
                case 3:money_withdraw(pass_code,ptr_users) ;break;
                case 4:money_transfer(pass_code,ptr_users) ;break;
                case 5:money_exchange(pass_code,ptr_users) ;break;
                default: cout<<"invalid operation"         ;break;
                }
                cout<<"\n thanks for using our bank \npress 0 to exit \n";
            if(0==exit){
                    break;
            }
            else{
                continue;
            }

    }while(exit!=0);}

else{
            cout<<"wrong password"<<"\n"<<"try again"<<endl;
        }
    cout<<"take your card please\n";

}
    return 0;
}


