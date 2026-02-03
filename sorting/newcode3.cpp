#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    int t;
    cin>>t;
    int a;
    for (int i = 0; i < t; i++)
    {
        int n;
        for (int j = 0; j < n; i++)
        {
            
            cin>>a;
            v.push_back(a);
            a=0;
        }
        
    }
    cout<<v.at(0);
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    
    return 0;
}    