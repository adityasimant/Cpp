#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1 = {1,3,4,2,5,6,9};
    // adding elements
    v1.push_back(3);
    v1.push_back(5);

    // displaying weight
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1.at(i)<<endl;
    }
    
    // update the object
    cout<<"after update : "<<endl;
    v1.at(1) = 23;
     for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1.at(i)<<endl;
    }

    // remove the object
    v1.erase(v1.begin() + 2);
    cout<<"after remove : "<<endl;

     for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1.at(i)<<endl;
    }

    return 0;
}