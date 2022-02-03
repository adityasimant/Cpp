#include<iostream>
#include<conio.h>
using namespace std;

class account{

    private :
        int id;
        string name;
        int balance;

    public :

        void createAccount(){
            cout<<"enter the id \n";
            cin>>id;
            cout<<"enter the name \n";
            cin>>name;
            cout<<"enter the balance \n";
            cin>>balance;
        }
        void deposite(int n){
            balance = balance + n;
        }
        void withdraw(int n){
            if(n<balance){
                balance = balance - n;
            }
        }
        void status(){
            cout<<id<<endl;
            cout<<name<<endl;
            cout<<balance<<endl;
        }
};

int main(){
    char ch = 'y',decision;
    account a1;
    int n;
    while (ch == 'y')
    {
        cout<<"what do you wish to perform ? \n";
        cout<<"press c to create acc, d to deposite, w to withdraw : ";
        cin>>decision;
        switch (decision)
        {
        case 'c':
        
             a1.createAccount();

            break;

        case 'd': 
            cout<<"enter the amount : ";
            cin>>n;
            a1.deposite(n);
            
            break;

        case 'w': 
            cout<<"enter the amount : ";
            cin>>n;
            a1.withdraw(n);
            break;
        
        
        }
        cout<<"\n do you wish to continue ? (y/n)";
        cin>>ch; 
    }
    a1.status();
    





}