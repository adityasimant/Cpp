#include<iostream>
using namespace std;

class Test{
    private:
        int x,y;
    public:
        Test(int x, int y){
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