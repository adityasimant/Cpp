#include<iostream>
using namespace std;

class student{
    private:
        int id;
        string name;

    public:
        void setStudent(int id ,string name){
            this->id=id;
            this->name=name;
        }
        int getId(){
            return id;
        }
        string getName(){
            return name;
        }
};

class marks :virtual public student{
    private:
        int marks1;
        int marks2;

    public:
        void setMarks(int marks1, int marks2){
            this->marks1=marks1;
            this->marks2=marks2;
        }
        int getMarks1(){
            return marks1;
        }
        int getMarks2(){
            return marks2;
        }

};

class sport : virtual public student{
    private :
        char grade;
    public:
        void setGrade(char grade){
            this->grade=grade;
        }
        char getGrade(){
            return grade;
        }
};

class Result : public marks, public sport{
 
        
    public:
        
        void set(){
            setStudent(03,"ojas");
            setMarks(78,89);
            setGrade('A');
        }
        void disp(){
            cout<<"student name : "<<getName()<<endl;
            cout<<"student id : "<<getId()<<endl;
            cout<<"student marks1 : "<<getMarks1()<<endl;
            cout<<"student marks2 : "<<getMarks2()<<endl;
            cout<<"Student grade :"<<getGrade()<<endl;
            cout<<"average is :"<<(getMarks1()+getMarks2())/2<<endl;
        }
};

int main(){
    Result s1;
    // s1.avg();
    s1.set();
    s1.disp();
    return 0;
}