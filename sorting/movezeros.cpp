#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main(){
    vector<int> v={0,1,0,3,12,0,2};
    int a=v.size();
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]==0)
        {
            v.erase(v.begin()+i);
        }
        
    }
    int s=v.size();
    for (int i = 0; i < (a-s); i++)
    {
        v.push_back(0);
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    
    
    
    

    return 0;
}