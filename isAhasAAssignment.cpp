#include<iostream>
#include<vector>
using namespace std;

class Subject{

    private:
    int id;
    string name;
    public:
    Subject(int id, string name){
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

class Student{
    private:
    int id;
    string name;
    vector<Subject> V ;
    public:
    Student(int id,string name){
        this->id=id;
        this->name=name;
    }
    void set(){
        Subject s1(3,"em3");
        Subject s2(1,"de");
        Subject s3(2,"edc");
        Subject s4(4,"emi");
        V.push_back(s1);
        V.push_back(s2);
        V.push_back(s3);
        V.push_back(s4);

    }
    void show(){
        for (int i = 0; i < V.size(); i++)
        {
            cout<< V.at(i).getId()<<endl;
            cout<< V.at(i).getName()<<endl;
        }
    }

};

int main(){
   Student s1(1,"ojas");
   s1.set(); 
   s1.show();
   return 0;
}