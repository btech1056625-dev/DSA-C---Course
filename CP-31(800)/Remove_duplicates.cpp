#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v={1,1,2};
    for (int i = 0; i < v.size(); i++)
    {
        
        for (int t = i+1; t < v.size(); t++)
        {
            
            if (v[i]==v[t])
            {
                v.erase(v.begin()+t);
                t--;
            }
            
        }
        
        
    }
    cout<<v.size();
    
    
    

    

    return 0;
}