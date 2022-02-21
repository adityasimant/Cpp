/*

*/
#include<iostream>
using namespace std;

template<class T>
class Test{

    private:
    T i;
    public:
    Test(T x){
        i=x;
    }
    void show(){
        cout<<i<<endl;
    };
};


int main(){
    Test<int>t1(100);
    Test<string>t2("abc");
    t1.show();
    t2.show();

    return 0;
}