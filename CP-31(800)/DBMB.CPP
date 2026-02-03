#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;




int main(){
    int t;
    cin>>t;
    while (t--)
    {
        vector<int> a;
        int n, s, x;
        cin>>n>>s>>x;
        for (int i = 0; i < n; i++)
        {
            int y;
            cin>>y;
            a.push_back(y);
        }
        
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            sum+=a[i];
        }
        if (sum==s)
        {
            cout<<"yes";
        }
        else
        {
            while (sum<s)
            {
                sum+=x;
                if (sum==s)
                {
                    cout<<"Yes";
                }
                
            }
            if(sum>s){
                cout<<"No";
            }
            
            
        }
        
        
        

        
        
    }
    


    return 0;
}