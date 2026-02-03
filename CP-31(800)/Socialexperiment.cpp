#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int d=0;
        int x=n/3;
        int y=n%3;
        if (y==0)
        {
            cout<<d<<endl;
             
            
            
        }
        else if (y>0)
        {
           if (n==2)
           {
               d=d+2;
                cout<<d<<endl;
           }
           else
           {
               d=d+1;
               cout<<d<<endl;
           }
           
           
           
        }
        
        
        d=0;
    }
    

    return 0;
}