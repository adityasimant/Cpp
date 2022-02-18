#include<iostream>
using namespace std;

class Animal{
    private:

    public:
        void eat(){
            cout<<"is eating (animal)"<<endl;
        }
        void sleep(){
            cout<<"is sleeping (animal)"<<endl;
        }
};

class Bird:public Animal{
    private:

    public:
        void eat(){
            cout<<"is eating (bird)"<<endl;
        }
        void sleep(){
            cout<<"is sleeping (bird)"<<endl;
        }
        void fly(){
            cout<<"is flying (bird)"<<endl;
        }
};


int main(){
    Animal a1;
    a1.eat();
    a1.sleep();
    Bird b1;
    b1.eat();
    b1.sleep();
    b1.fly();
    return 0;
}