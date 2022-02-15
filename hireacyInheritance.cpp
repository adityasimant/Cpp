#include<iostream>
using namespace std;

class Account{
    private:
        int id;
        string name;

    public:
        void setAccount(int id ,string name){
            this->id=id;
            this->name=name;
        }
        int getId(){
            return id;
        }
        string getName(){
            return name;
        }
};

class savings : public Account{
    private:
        float balance;
        

    public:
        void setBalance(int amount){
            this->balance = amount;
        }
        void deposite(int amount){
            balance = balance + amount;
        }
        void withdraw(int amount){
            balance = balance - amount;
        }
        float getBalance(){
            return balance;
        }
        

};

class Loan : public Account{
    private:
        float balance;
        float intrest;
        int loan1=0;
    public:
        void setBalance(int amount){
            this->balance = amount;
        }
        void deposite(int amount){
            balance = balance + amount;
        }
        void withdraw(int amount){
            balance = balance - amount;
        }
        float getBalance(){
            return balance;
        }
        void TakeLoan(float amount){
            balance = balance + amount;
            loan1++;
        }
        void payLoan(float amount){
            balance = balance - amount*0.3;
        }

};

int main(){
   Loan A1;
   savings A1;
   
    return 0;
}