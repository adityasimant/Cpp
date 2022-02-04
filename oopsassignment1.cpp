#include<iostream>
using namespace std;

class students{

private:
    string Firstname;
    string LastName;
    int ClassYear;
    string major;

public:
    void setFirstName(string Fname){
        Firstname = Fname;
    }
    void setLastName(string Lname){
        LastName = Lname;
    }
    
    void setClassYear(int year){
        ClassYear = year;
    }
    void setMajor(string mr){
        major = mr;
    }
};

int main(){



    return 0;
}