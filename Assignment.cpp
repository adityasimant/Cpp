#include<iostream>
#include<string.h>
using namespace std;
int main(){

    char name[12];
    cout<<"enter the string"<<endl;
    cin>>name;
//48 - 57
int i=0,j=0;
char alpha[10],special[10],final[30];
for(char x:name){
    if (x>=97 && x<=122)
    {
        alpha[i]=x;
        i++;
    }
    else{
        special[j]=x;
        j++;
    }
}
    strcpy(final,alpha);
    strcat(final,special);
    cout<<final;
       
    return 0;
}