#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    // DYNAMIC ARRAY (VECTOR)
    vector<int> v;
    vector<int> a(5,1);   // The vector of fixed size is formed where each element is one.
    vector<int> l(a);
    for(int i:l){
        cout<<i<<endl;
    }
    cout<<"Capacity--->"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(2);
    v.push_back(3);
    
    cout<<"The capacity-->"<<v.capacity()<<endl;
    cout<<"The size--->"<<v.size()<<endl;
    cout<<"Element at 2nd index:"<<v.at(2)<<endl;
    v.erase(v.begin()+2);    // function for removing particular element.
    //We can use front and back operation same as for the static array.
    cout<<"Before pop."<<endl; 
    for(int i:v){
        cout<<i<<endl;
    }
    v.pop_back();
    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<endl;
    }
    cout<<"Before Clear:"<<v.size()<<endl;
    v.clear();  // T.C. ---->   O(n)
    cout<<"After clear:"<<v.size()<<endl;
    cout<<v.front()<<endl;
    
    return 0;
}