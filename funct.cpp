#include <iostream>
#include <string.h>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

string wishMe()
{
    string wish = "Good Morning";
    return wish;
}

// pointer var.
int area(int *p,int *q){
    cout<<"area is : "<<(*p)*(*q);
}

int main()
{
    int a=3, b=4;
    cout << add(a, b) << endl;

    string name = "aditya ";
    cout << wishMe() << "_" << name;

    area(&a,&b);

    return 0;
}