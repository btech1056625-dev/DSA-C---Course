#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t=1;
    for (int i = 1; i < (n+1); i++)
    {
        for (int j = n; j > 0; j--)
        {
            if (j>i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*"<<" ";
            }
        }
        for (int j = 1; j < i; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<"\n";
        
    }
    for (int i = 0; i < n-1; i++)
    {
        int v = n-1;
        for (int j = n-1; j > 0; j--)
        {
            if (j>(v-i-1))
            {
                cout<<" ";
            }
            else
            {
                cout<<"*"<<" ";
            }
            
        }
        v--;
        
        
        cout<<"\n";
        
    }
    
    

    return 0;
}