#include"bank_users.hpp"
#define no_one 6
/********************************************************************/
void view_menu(){
    cout<<"********************"<<endl;
    cout<<"1 - check balance  "<<endl; //done
    cout<<"2 - money deposit  "<<endl; // done
    cout<<"3 - money withdraw "<<endl; // done
    cout<<"4 - money transfer "<<endl; // done
    cout<<"5 - money exchange "<<endl; // done
    cout<<"6 - press 0 to exit"<<endl; // done
    cout<<"********************"<<endl;
}
/***************************************************************/
int check_password(int pass_code,customer_account *customers[]){
    if(pass_code==customers[0]->password ||
       pass_code==customers[1]->password ||
       pass_code==customers[2]->password ||
       pass_code==customers[3]->password ||
       pass_code==customers[4]->password ||
       pass_code==customers[5]->password)

    {
        return ok;
    }
    else{
        return N_ok;
    }
}
/***************************************************************/
int check_balance(int pass_word,customer_account *customer[]){
    if(NULL==customer){ return N_ok;}
    else{
        if(pass_word==customer[0]->password){cout<<"welcome "<<customer[0]->name<<"\nyour balance :"<<customer[0]->balance<<"\n";customer[0]->num_operations++;return ok;}
        else if(pass_word==customer[1]->password){cout<<"welcome "<<customer[1]->name<<"\nyour balance :"<<customer[1]->balance<<"\n";customer[1]->num_operations++;return ok;}
        else if(pass_word==customer[2]->password){cout<<"welcome "<<customer[2]->name<<"\nyour balance :"<<customer[2]->balance<<"\n";customer[2]->num_operations++;return ok;}
        else if(pass_word==customer[3]->password){cout<<"welcome "<<customer[3]->name<<"\nyour balance :"<<customer[3]->balance<<"\n";customer[3]->num_operations++;return ok;}
        else if(pass_word==customer[4]->password){cout<<"welcome "<<customer[4]->name<<"\nyour balance :"<<customer[4]->balance<<"\n";customer[4]->num_operations++;return ok;}
        else if(pass_word==customer[5]->password){cout<<"welcome "<<customer[5]->name<<"\nyour balance :"<<customer[5]->balance<<"\n";customer[5]->num_operations++;return ok;}
        else{cout<<"invalid password "; return N_ok;}
    }
}
/***************************************************************/
static int who_is_user_id(int id,customer_account *customer[]){
        if(id==customer[0]->number_id){return 0;}
        else if(id==customer[1]->number_id){return 1;}
        else if(id==customer[2]->number_id){return 2;}
        else if(id==customer[3]->number_id){return 3;}
        else if(id==customer[4]->number_id){return 4;}
        else if(id==customer[5]->number_id){return 5;}
        else {return no_one;} // 6 : mean no user is found
}
/***************************************************************/
static int who_is_user(int pass_word,customer_account *customer[]){
        if(pass_word==customer[0]->password){return 0;}
        else if(pass_word==customer[1]->password){return 1;}
        else if(pass_word==customer[2]->password){return 2;}
        else if(pass_word==customer[3]->password){return 3;}
        else if(pass_word==customer[4]->password){return 4;}
        else if(pass_word==customer[5]->password){return 5;}
        else {return no_one;} //6 mean no user is found
}
/***************************************************************/
int money_deposit(int pass_word,customer_account *customer[]){
    if(NULL==customer){ return N_ok;}
    else{
            int deposit_money=0;
            cout<<"enter deposit money cash please:";
            cin>>deposit_money;
            if(deposit_money<0){    do{
                cout<<"invalid input try again\nenter deposit money cash please: ";

                cin>>deposit_money;
                                      }while(deposit_money<0);
                                }
                    for(int i=0;i<6;i++){
                        if(who_is_user(pass_word,customer)==i){
                                customer[i]->balance+=deposit_money;
                                customer[i]->num_operations++;}
                                        }
        }
}
/***************************************************************/
int money_withdraw(int pass_word,customer_account *customer[]){
    if(NULL==customer){ return N_ok;}
    else{
             int user_num;
    for(int i=0;i<6;i++){
                        if(who_is_user(pass_word,customer)==i){ user_num=i;}
                        }

            int withdraw_money=0;
            cout<<"enter withdraw money cash please:";
            cin>>withdraw_money;
            if(withdraw_money<0 || withdraw_money > customer[user_num]->balance || isalpha(withdraw_money)){
                    do{
                cout<<"invalid input try again\nenter withdraw money cash please: ";
                cin>>withdraw_money;
                        }while(withdraw_money<0 || withdraw_money > customer[user_num]->balance || isalpha(withdraw_money));
                        }
            customer[user_num]->balance-=withdraw_money;
            customer[0]->num_operations++;
        }

}
/***************************************************************/
int money_transfer(int pass_word,customer_account *customer[]){
        if(NULL==customer){ return N_ok;}
    else{
        int transfer_money=0;
        cout<<"enter transfer money please:";
        cin>>transfer_money;
        int password_again=0;
        cout<<"enter password again please:";
        cin>>password_again;
        if(password_again==pass_word){
            int user_num;
                for(int i=0;i<6;i++){if(who_is_user(pass_word,customer)==i){ user_num=i;}}
        if(transfer_money>customer[user_num]->balance){cout<<"invalid operation ";}
        else{int to_user_id=0;
             cout<<"enter id you want to transfer money to please:";
             cin>>to_user_id;
             if(6==who_is_user_id(to_user_id,customer)){cout<<"invalid operation";}
             else{
                customer[user_num]->balance -= transfer_money;
                customer[who_is_user_id(to_user_id,customer)]->balance += transfer_money;
                customer[user_num]->num_operations++;
             }
         }
        }
        else{
            cout<<"invalid operation ";
        }
    }
}
/***************************************************************/
int money_exchange(int pass_word,customer_account *customer[]){
    int option_0=0;
    cout<<"please choose the operation you need : \n";
    cout<<"1 : from $ to EG\n";
    cout<<"2 : from euro to EG\n";
    cout<<"3 : from riayal to EG\n";
    cin>>option_0;
    double cash=0;
    typedef enum {
        dollar= 1,
        euro  = 2,
        riyal = 3
    }converts;
    cout<<"enter the cash please: \n";
    cin>>cash;
     switch (option_0){
                case dollar:
                   {
                     int option_1=0;
                    cout<<"you entered :"<<cash<<"$ ="<<47.85*cash<<"\n";
                    cout<<"1 : you want to deposit it in your account\n";
                    cout <<"2 :take cash now\n";
                    cin>>option_1;
                        switch(option_1){
                            case 1:customer[who_is_user(pass_word,customer)]->balance+=cash*47.85;break;
                            case 2:cout<<"take your money please";break;
                    };break;
                   }
                case euro:
                            {
                    int option_1=0;
                    cout<<"you entered :"<<cash<<"euro ="<<51.12*cash<<"\n";
                    cout<<"1 :you want to deposit it in your account\n";
                    cout<<"2 :take cash now\n";
                    cin>>option_1;
                    switch(option_1){
                        case 1:customer[who_is_user(pass_word,customer)]->balance+=cash*51.12;break;
                        case 2:cout<<"take your money please";break;
                    };break;
                            }
                case riyal:{
                    int option_1=0;
                    cout<<"you entered :"<<cash<<"riyal ="<<12.76*cash<<"\n";
                    cout<<"1 : you want to deposit it in your account\n";
                    cout <<"2 :take cash now\n";
                    cin>>option_1;
                    switch(option_1){
                        case 1:customer[who_is_user(pass_word,customer)]->balance+=cash*12.76;break;
                        case 2:cout<<"take your money please";break;
                    };break;
                }
                default: cout<<"invalid operation"         ;break;
                }
}


