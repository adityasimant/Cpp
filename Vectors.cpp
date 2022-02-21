#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1;
    // add items to vector
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(4);
    v1.push_back(2);

    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1.at(i)<<endl;
    }
    


    return 0;
}