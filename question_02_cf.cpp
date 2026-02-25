#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool sort(vector<int> &arr){
    for (int i = 0; i < (arr.size()/2); i++)
    {
        if(i==0||i==1){
            swap(arr[i],arr[i+2]);
            if(is_sorted(arr.begin(),arr.end())){
                return true;
                break;
            }
            else
            {
                swap(arr[i],arr[i+2]);
            }
                
        }
        else
        {
            swap(arr[i],arr[i*2]);
            if(is_sorted(arr.begin(),arr.end())){
                return true;
                break;
            }
            else
            {
                swap(arr[i],arr[i*2]);
                    
            }
        }
            
    }
    return false;
    
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i]; 
        }
        
            
        if(sort(arr)){
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
        
        
    }

    return 0;
}