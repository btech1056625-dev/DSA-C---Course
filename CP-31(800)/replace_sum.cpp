#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    while (t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int> a;
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            b.push_back(x);
        }
        vector<vector<int>> q;
        for (int i = 0; i < q; i++)
        {
            vector<int> y;
            int l, r;
            cin>>l>>r;
            y.push_back(l);
            y.push_back(r);
            
            q.push_back(y);

        }
        
        

        
        
    }
    
    


    return 0;
}