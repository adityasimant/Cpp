#include<iostream>
using namespace std;


class box{

    private:
        float height;
        float width;
        float breath;

    public:
        box(int h,int v,int b){
            height=h;
            width=v;
            breath=b;
        }
       
        void volume(){
            float volume = height*breath*width;
            cout<<volume;
        }
        void area(){
            float surfacearea = 6*width*height;
            cout<<"S Area : "<<surfacearea;
        }
};



int main(){

    box b1(2,3,4);
    b1.volume();
    b1.area();
    return 0;
}