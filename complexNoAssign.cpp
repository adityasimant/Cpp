#include <iostream>
using namespace std;

class Complex
{
private:
    int Real, imaginary;

public:
    Complex(int Real, int imaginary)
    {
        this->Real = Real;
        this->imaginary = imaginary;
    }
    Complex()
    {
        Real = 0;
        imaginary = 0;
    }
    Complex operator+(Complex ob)
    {
        Complex temp;
        temp.Real = this->Real + ob.Real;
        temp.imaginary = this->imaginary + ob.imaginary;
        return temp;
    }
    
    void show()           
    {
        cout << Real << "+ i" << imaginary << endl;
    }
};

int main()
{
    Complex t1(1, 2);
    Complex t2(3, 4);
    Complex t3;
    t3 = t1 + t2;
    t3.show();
    return 0;
}