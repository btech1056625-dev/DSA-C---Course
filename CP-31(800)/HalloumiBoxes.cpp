#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n,k;
    cin>>n>>k;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);   
    }

    for (int i = 0; i < n; i++)
    {
        if ((k+i)>(n-1))
        {
            arr.sort(arr+i, arr+n);
        }
        else
        {
            arr.sort(arr+i, arr+k);
        }
        
    }
    /*int count=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<arr[i+1])
        {
            count++;   
        }
        else
        {
            cout<<"NO";
            break;
        }
        
        
    }
    if (count==n)
    {
        cout<<"YES";
    }*/
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
    

    


    return 0;
}