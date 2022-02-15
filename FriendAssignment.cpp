#include <iostream>
using namespace std;
class Test2;
class Test1
{
private:
    int  a;
public:
    Test1(int x){
        a=x;
    }
    void show()
    {
        cout << "value of a :" << this->a << endl;
    }
    friend void swap(Test1 a1,Test2 b1);
};

class Test2
{
private:
    int b ;
public:
    Test2(int y){
        b=y;
    }
    void show()
    {
        cout << "value of b :" << this->b << endl;
    }
    friend void swap(Test1 a1,Test2 b1);

};

void swap(Test1 a1,Test2 b1)
{
    
    int temp;
    temp = a1.a;
    a1.a = b1.b;
    b1.b = temp;
    cout<<"value after swap : "<<endl;
    cout<<"a : "<<a1.a<<endl;
    cout<<"b : "<<b1.b<<endl;

}

int main()
{
    Test1 a1(7);
    Test2 b1(3);
    swap(a1,b1);
    a1.show();
    b1.show();
   
    return 0;

}



// protected = except private
// private = all funct becoe private in derived class