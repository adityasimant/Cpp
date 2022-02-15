#include<iostream>
using namespace std;

class A{
    private:
        int a =10;
    public:
    A(){
        cout<<"in A"<<endl;
    }
    A(int y){
        a=y;
    }
    int getA(){
        return a;
    }
};

class B: public A{
    private:
        int j;
    public:
    B(int p,int q):A(p){
        int x = getA();
        j = x*x;
        cout<<"in b"<<endl;
    }
    void add(){
        cout<<getA()+j<<endl;
    }
};

int main(){
    B ob(30,40);
    ob.add();
    return 0;
}