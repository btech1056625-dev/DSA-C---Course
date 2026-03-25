#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    int arr[10]={1,2,3,1,1,1,1,4,2,3};
    int k = 3;
    int max=0;
    int sum=0;
    vector<vector<int>> v;
    for (int i = 0; i < 10; i++)
    {
        int p= 0;
        if (sum==k)
        {
            for (int j = p; j < (i+1); j++)
            {
                vector<int> v1;
                v1.push_back(arr[j]);
                v.push_back(v1);
            }
            sum=0;
            p=i+1;
            
        }
        else if (sum<k)
        {
            sum+=arr[i];
            
        }
        else
        {
            sum=0;
            p=i+1;
        }
        
           
    }
    for(auto i: v){
        if(max< i.size()){
            max = i.size();
        }
    }
    for(auto i: v){
        if(max == i.size())
        {
            for(auto j: i){
                cout<<j<<" ";
            }
        }
    }
    
    
    
    
    

    return 0;
}