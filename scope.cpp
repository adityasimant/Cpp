#include<iostream>
using namespace std;

int main(){
    int i=5;{
        int i=4;{
            int i =3;
            cout<<i<<endl;
        }
        cout<<i<<endl;
    }
    cout<<i<<endl;
    return 0;
}