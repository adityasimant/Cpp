#include<iostream>
using namespace std;

class Person{

    private:
    string name;
    int phone_no;
    public:
    void setPerson(string name, int number){
        this->name=name;
        this->phone_no=number;
    }
    string getname(){
        return name;
    }
    int getNumber(){
        return phone_no;
    }
};

class Student:public Person{

    private:
    string branch;
    int id;
    public:
    void serStudent(string branch, int number){
        this->branch=branch;
        this->id=number;
    }
    string getBranch(){
        return branch;
    }
    int getId(){
        return id;
    }
};

class Teacher:public Person{

    private:
    string dept;
    int salary;
    public:
    void setTeacher(string dept, int number){
        this->dept=dept;
        this->salary=number;
    }
    string getBranch(){
        return dept;
    }
    int getId(){
        return salary;
    }
};



int main(){

    return 0;
}