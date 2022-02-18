#include <iostream>
using namespace std;

class Complex
{
private:
    int i, j;

public:
    Complex(int i, int j)
    {
        this->i = i;
        this->j = j;
    }
    Complex()
    {
        i = 0;
        j = 0;
    }
    Complex operator+(Complex ob)
    {
        Complex temp;
        temp.i=this->i+ob.i;
        temp.j=this->j+ob.j;
        return temp;

    }

    void show()
    {
        cout << i << "\t" << j << endl;
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