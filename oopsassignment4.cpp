#include <iostream>
using namespace std;
class seatAssign
{

    int row;
    char ch;
    void setRow(int r)
    {
        row = r;
    }
    void setch(char c)
    {
        ch = c;
    }
};

class tickets
{
private:
    string from;
    string to;
    int flightNo;
    seatAssign s;

public:
    void setFrom(string fromcity)
    {
        from = fromcity;
    }
    void setTo(string tociti)
    {
        to = tociti;
    }
    void setflightNo(int flightnumber)
    {
        flightNo = flightnumber;
    }
    void setSeatAssign(seatAssign s1)
    {
        s = s1;
    }
};

int main()
{
    tickets t1;
    t1.setTo("mumbai");
    return 0;
}