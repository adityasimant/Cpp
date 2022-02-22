#include<iostream>
using namespace std;

class Address{

    private:
    int House_no;
    string locality;
    int pinCode;

    public:
    Address(){
        
    }
    Address(int House_no,string locality, int pinCode){
        this->House_no=House_no;
        this->locality=locality;
        this->pinCode=pinCode;
    }
    string getlocality(){
        return locality;
    }
    int getHouse_no(){
        return House_no;
    }
    int getPincode(){
        return pinCode;
    }
    void show(){
        cout<<locality<<"\t"<<pinCode<<"\t"<<House_no;

    }

};

class Person{

    private:
    string name;
    int Phone_no;
    Address adr;
    public:
    Person(string name, int Phone_no, Address ads){
        adr = ads;
        this->name=name;
        this->Phone_no=Phone_no;
    }
    string getname(){
        return name;
    }
    int getPhone_no(){
        return Phone_no;
    }
    void disp(){
        cout<<name<<"\t"<<Phone_no;
        adr.show();
    }
};

int main(){
    Address ads(2,"dfs colony",3001);
    Person p1("abc",35,ads);
    p1.disp();
    return 0;
}