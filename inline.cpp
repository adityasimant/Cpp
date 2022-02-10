#include<iostream>
using namespace std;

class test{

    public:
    // int a=2,b=3;
        void show1(){
            cout<<"Helo_World";
        }
        void show();
        void disp(int a,int b);
};
void test::disp(int a,int b){
    cout<<"in disp"<<a+b;
}
void test::show(){
    cout<<"int show";
} 

int main(){
    test t1;
    t1.disp(100,200);
    return 0;
}