#include<iostream>
using namespace std;


class room{

    private:
        float height;
        float width;
        float breath;

    public:
        void setHeight(float h){
            height =h;
        }
        
        void setbreath(float b){
            breath =b;
        }
        void setwidth(float w){
            width =w;
        }
        float volume(){
            float volume = height*breath*width;
            return volume; 
        }
};



int main(){

    return 0;
}