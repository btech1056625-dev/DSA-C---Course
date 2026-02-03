#include<iostream>
#include<array>
#include<vector>
using namespace std;
int main(){
    // STATIC ARRAY
    array<int , 4> a={1,2,3,4};   // STL Array: Static Array.
    int size=a.size();
    for (int i = 0; i < size ; i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Element at the 2nd position:"<<a.at(2)<<endl;
    cout<<"Empty or not:"<<a.empty()<<endl;
    cout<<"The first element:"<<a.front()<<endl;
    cout<<"The last element of the array:"<<a.back()<<endl;
    cout<<a.front()<<endl;
    
    
    return 0;
}