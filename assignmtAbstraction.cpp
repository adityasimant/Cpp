#include<iostream>
using namespace std;

class GeneralBank{
    public:
       virtual float getSavingIntrestRate() =0;
       virtual float getFixedIntrestRate() = 0;
};

class ICICIBank : public GeneralBank{
    public:
    float getSavingIntrestRate(){
        return 4;
    }
    float getFixedIntrestRate(){
        return 8.5;
    }
};

class KotMBank : public GeneralBank{
    public:
    float getSavingIntrestRate(){
        return 6;
    }
    float getFixedIntrestRate(){
        return 9;
    }
};


int main(){
    float first,second;

    GeneralBank *p;
    ICICIBank ob2;
    KotMBank ob3;

    p=&ob2;
    first = p->getFixedIntrestRate();
    second = p->getSavingIntrestRate();
    cout<<first<<"\t"<<second<<endl;

    p=&ob3;
    first = p->getFixedIntrestRate();
    second = p->getSavingIntrestRate();
    cout<<first<<"\t"<<second<<endl;


    return 0;
}