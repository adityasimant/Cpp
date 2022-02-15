#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"in A"<<endl;
    }
};

class B: public A{
    private:

    public:
    B(){
        cout<<"In B"<<endl;
    }
};

class C: public B{
    public:
        C(){
            cout<<"In C"<<endl;
        }
};

int main(){
    C ob;
    return 0;
}