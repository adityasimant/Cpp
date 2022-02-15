#include <iostream>
using namespace std;

class test
{
private:
    int i = 0;
    static string name;

public:
    test(string name)
    {
        this->name = name;
    }
    void wish()
    {
        cout << "Hello World";
    }
    void eel(int i)
    {
        this->i = i;
    }
    static void staticWish()
    {
        cout << "hello " << name;
    }
};
string test::name;
int main()
{
    test t1("adi");
    t1.wish();
    test::staticWish();

    return 0;
}