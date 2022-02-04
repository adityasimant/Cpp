#include <iostream>
using namespace std;

class circle
{
private:
    float radius;

public:
    circle()
    {
        cout << "hello there" << endl;
    }
    void setRadius(float x)
    {
        radius = x;
    }
    float getRadius()
    {
        return radius;
    }
};

int main()
{
    float radius;
    circle c1;
    cout << "enter the value of radius : ";
    cin >> radius;
    c1.setRadius(radius);
    float r = c1.getRadius();
    float Area = 3.14 *r*r;
    cout << Area;
}