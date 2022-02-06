#include<iostream>
using namespace std;


class student{
    private:
        string name;
        int markssb1;
        int markssb2;
        int markssb3;
    public :
        void setName(string name1){
            name = name1;
        }
        void setMarks1(int marks1){
            markssb1 = marks1;
        }
        void setMarks2(int marks2){
            markssb2 = marks2;
        }
        void setMarks3(int marks3){
            markssb3 = marks3;
        }
        float average(){
            return (markssb1+markssb2+markssb3)/3;
        }
        void display(){
            cout<<"name : "<<name<<"total :"<<markssb1+markssb2+markssb3;
        }

};



int main(){
    student s1;
    int marks1,marks2,marks3;
    string name1;
    cout<<"enter the name :\n";
    cin>>name1;
    cout<<"enter marks 1 : \n";
    cin>>marks1;
    
    cout<<"enter marks 2 : \n";
    cin>>marks2;

    cout<<"enter marks 3 : \n";
    cin>>marks3;

    s1.setName(name1);
    s1.setMarks2(marks2);
    s1.setMarks3(marks3);
    cout<<"average :"<<s1.average();
    s1.display();

    return 0;
}