#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int c=1;
        bool ans=true;
        int x=n/2;
        int y=(n/2)+1;
        while (ans)
        {
            if (x==k||y==k)
            {
                if (c==1)
                {
                    
                    cout<<c;
                    ans=false;
                }
                else
                {
                    
                    cout<<c;
                    ans=false;
                }
                
            }
            else if (x==0||y==0)
            {
                c=-1;
                cout<<c;
                ans=false;
            }
            else
            {
                x=x/2;
                y=(x/2)+1;
                c++;
            }
            
            
            
        }
        
    }
    

    return 0;
}