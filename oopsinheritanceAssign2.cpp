#include<iostream>
using namespace std;

class Person{
    private:
        string member;
};

class Employee : public Person{
    private:
        double Annual_salary;
        int year_of_start;
        string National_insurance_number;
    public:

    void setValue(double A_S,int year,string NIN){
        this->Annual_salary=A_S;
        this->year_of_start=year;
        this->National_insurance_number=NIN;
    }

    string getNIN(){
        return National_insurance_number;
    }
    double getA_S(){
        return Annual_salary;
    }
    int getYear(){
        return year_of_start;
    }
};

class TestEmployee : public Employee{

    public:
        void set(){
            setValue(32431,2002,"abc");
        }
        void show(){
            cout<<getNIN()<<" is the NIN number "<<endl;
            cout<<getA_S()<<" is the A-S number "<<endl;
            cout<<getYear()<<" is the year started"<<endl;
        }

};

int main(){
    TestEmployee t1;
    t1.set();
    t1.show();
    return 0;
}