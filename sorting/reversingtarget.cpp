#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v, int m){
    int s= m+1;
    int e= v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}


int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    int m;
    cout<<"Enter the target:";
    cin>>m;
    vector<int> a=reverse(v,m);
    for (int i = 0; i < (v.size()); i++)
    {
        cout<<a[i]<<endl;
    }
    


    return 0;
}