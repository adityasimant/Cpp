#include<iostream>
using namespace std;

class Person{
    private:
        string name;
    public:
        void setName(string name){
            this->name=name;
        }
        string getName(){
            return name;
        }
};

class Student:public Person{
    private:
    int id;
    public:
    void setVAl(){
        setName("ABC");
    }
    void setId(int id){
        this->id=id;
    }
    int getId(){
        return id;
    }
};

class Teacher:public Person{
    private:
    int salary;
    string subjects;
    void setTeacherValue(int salary, string subject){
        this->salary=salary;
        this->subjects=subject;
    }
    int getSalary(){
        return salary;
    }
    string getsubject(){
        return subjects;
    }
};

class CollegeStudent: public Student{
    private:
        int year;
        string major;
    public:
        void setVal(){
            setVAl();
            setId(6);
        }
        void setCollegeStudentvalue(int year, string major){
            this->year=year;
            this->major=major;
        }
        int getYear(){
            return year;
        }
        string getmajor(){
            return major;
        }
};


int main(){
    
    return 0;
}