#include<iostream>
using namespace std;

class customer{
    private:
        string firstName;
        string lastName;

    public :
        void setName(string firstname, string lastname){
            firstName = firstname;
            lastName = lastname;
        }
};

class account{
    private:
        customer c1;
        float balance =0;
    public :
        void credit(float amt){
            balance = balance + amt;
        }
        void debit(float amt){
           
           if(amt<balance){
            balance = balance - amt;
           }else{
               cout<<"not enough balance";
           }

        }
        void setCustomer(customer c){
            c1 = c;
        }
};


int main(){
    customer adi;
    account a1,a2;
    a1.setCustomer(adi);
    a2.setCustomer(adi);

    adi.setName("aditya","simant");
    return 0;
}