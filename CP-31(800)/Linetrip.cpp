#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> result;
    while (t>0)
    {
        int n,x;
        cin>>n>>x;
        vector<int> a;
        a.push_back(0);
        for (int i = 0; i < n; i++)
        {
            int y;
            cin>>y;
            a.push_back(y);
        }

        int v=x;
        for (int i = 0; i < n; i++)
        {
            int d= a[i+1]-a[i];
            v=v-d;
        }
        result.push_back(v*2);

       
        t--;
    }

    for (int i = 0; i < t; i++)
    {
        cout<<result[i]<<" ";
    }
    
    
    


    

    return 0;
}