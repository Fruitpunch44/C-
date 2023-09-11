#include<iostream>
#include<fstream>
using namespace std;          

class Bank {
    private:
    string password;
    int user_id;

    public:
    int balance=0;
    string acc_name;
    int acc_num;

    Bank(string Account_name,int Account_num,int Balance){
    balance=Balance;
    acc_name=Account_name;
    acc_num=Account_num;

        
    }

    void withdraw(int ammount){//withdrawal function
        if(ammount>balance || ammount < 0){
        cout<<"invalid ammount"<<endl;
    }else{
        balance -= ammount;
        cout<<"you withdrew"<<ammount<<"and you have"<<balance<<endl;
    }

}
void deposit(int ammount){
    balance += ammount;
    if(ammount==0){
        cout<<"you cant deposit deposit 0"<<endl;   
    }else{
         cout<<"you deposited"<<ammount<<endl;
    }
}
void acc_details(){
    cout<<"acc_num"<<endl;
    cout<<"acc_name"<<endl;
    cout<<"balance"<<endl;
}

void setpassword(string password){
    cout<<"setpassword"<<endl;
        }
void checkpassword(string password){
 };


int main(){
    
}