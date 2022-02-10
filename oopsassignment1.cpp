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
    string getFirstName(){
        return Firstname;
    }
    string getLastName(){
        return LastName;
    }
    
    int getClassYear(){
        return ClassYear;
    }
    string getMajor(){
        return major;
    }
};

int main(){

    string firstname,lastname,major;
    students s1;
    int year;

    cout<<"Enter Firstname : "<<endl;
    cin>>firstname;
    s1.setFirstName(firstname);

    cout<<"Enter lastname : "<<endl;
    cin>>lastname;
    s1.setLastName(lastname);

    cout<<"Enter year : "<<endl;
    cin>>year;
    s1.setClassYear(year);

    cout<<"Enter Major : "<<endl;
    cin>>major;
    s1.setMajor(major);

    cout<<"firstname is : "<<s1.getFirstName()<<endl;
    cout<<"lastname is : "<<s1.getLastName()<<endl;
    cout<<"year is : "<<s1.getClassYear()<<endl;
    cout<<"major is : "<<s1.getMajor()<<endl;



    return 0;
}