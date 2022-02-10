#include<iostream>
using namespace std;

class test{

    public:
    int i=0;
    static int j;
        test(){
            i++;
            j++;
        }
        void show(){
            cout<<"i : "<<i<<"j :"<<j;
        }
};
 int test ::j;
int main(){
    test t1;
    test t2;
    test t3;
    t1.show();
    t2.show();
    t3.show();
    return 0;
}