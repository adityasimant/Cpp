#include<iostream>
using namespace std;

class Compartment{
    public:
       virtual void notice() =0;
};

class FirstClass : public Compartment{
    public:
    void notice(){
        cout<<"notice for Firstclass"<<endl;
    }
};

class Ladies : public Compartment{
    public:
    void notice(){
        cout<<"notice for ladies"<<endl;
    }
   
};
class General : public Compartment{
    public:
    void notice(){
        cout<<"notice for General "<<endl;
    }
   
};
class Luggage : public Compartment{
    public:
    void notice(){
        cout<<"notice for luggage"<<endl;
    }
   
};
class TestCompartment{
      public:
      void default1(){
        cout<<"this is test compartment ";
      }
};


int main(){
    Compartment *c1[9];
    FirstClass f1;
    Ladies l1;
    General g1;

    for (int i = 0; i < 9; i++)
    {
        if(i<3){
            c1[i]=&f1;
            f1.notice();
        }
        else if (i>=3 && i<6)
        {
            c1[i]=&l1;
            l1.notice();
        }
        else if(i>=6 && i< 9)
        {
            c1[i]=&g1;
            g1.notice();
        }
        
    }
    
    return 0;
}