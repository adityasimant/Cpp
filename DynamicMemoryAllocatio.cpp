#include<iostream>
using namespace std;
class test{
    private:
    int *arr,len;
    public:
    test(int n){
        len = n;
        arr = new int[len];
        cout<<"enter elements for "<<this<<endl;
        for (int i = 0; i < len; i++)
        {
            cin>>arr[i];
        }
        
    }
    void disp(){
         for (int i = 0; i < len; i++)
        {
            cout<<arr[i];
        }
        
    }

};
int main(){
    test t1(3);
    test t2(2);
    return 0;
}