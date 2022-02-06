#include<iostream>
using namespace std;


class complex{

    private:
        float real;
        float imaginary;

    public:
        complex(){
            cout<<"welcome";
        }
        complex(float r,float i){
            real =r;
            imaginary =i;
        }
        void add(float r, float i){
            cout<<real+r<<"+"<<imaginary+i<<"i";
        }
        void subs(float r, float i){
            cout<<real-r<<"+"<<imaginary-i<<"i";
        }
};



int main(){

    return 0;
}