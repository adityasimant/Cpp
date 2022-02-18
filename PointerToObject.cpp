#include<iostream>
using namespace std;

class Complex{
    private:
        int x,y;
    public:
        Complex(int x, int y){
            this->x=x;
            this->y=y;       
        }
        void add(){
            cout<<"addition is : "<<x+y;
        }

};


int main(){
    
    return 0;
}