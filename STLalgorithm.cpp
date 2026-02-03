#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(10);

    cout<<binary_search(v.begin(),v.end(), 10)<<endl;
    // for returning iterator
    cout<<"The lower bound:"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"The Upper bound:"<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    rotate(v.begin(),(v.begin())+1,v.end());
    for(int i: v){
        cout<<i<<endl;
    }
    sort(v.begin(),v.end());     // The main working principle is introsort
                                 // A fusion of three algorithms quick sort, heap sort, insertion sort. 
    for(int i:v){
        cout<<i<<endl;
    }

    return 0;
}