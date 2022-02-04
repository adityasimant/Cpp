#include<iostream>
using namespace std;

class planets{
    private:
        string name;
        double distance;
        double gravity;
    public:
        void setName(string name1){
            name = name1;
        }
        void setDistance(double distance1){
            distance = distance1;
        }
        void setGravity(double gravity1){
            gravity = gravity1;
        }
        void printData(){
            cout<<"name :"<<name<<endl;
            cout<<"distance :"<<distance<<endl;
            cout<<"gravity :"<<gravity<<endl;
        }

};

int main(){

    planets mercury;
    planets venus;
    planets earth;

    mercury.setDistance(34567);
    venus.setDistance(74395);
    earth.setDistance(421794870);
    
    mercury.printData();
    venus.printData();
    earth.printData();
    
    return 0;
}