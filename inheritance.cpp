#include<iostream>
using namespace std;

class a{
    public:
    void sayHelloInA(){
        cout<<"in Base class"<<endl;
    }
};

class b:public a{

    private:

    public:
    void sayHelloInB(){
        cout<<"in derived class"<<endl;
    }


};


int main(){
    b ob1;
    ob1.sayHelloInA();
    return 0;
}