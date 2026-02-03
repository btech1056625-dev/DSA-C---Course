#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> nums={5,7,7,8,8,10};
    int target=8;
    int s=0;
    int e=nums.size()-1;
    int mid=s+(e-s)/2;
    vector<int> ans;
    int x=-1;
    int y=-1;
    
    while(s<=e)
    {
        if(nums[mid]==target)
        {
            
            
        }
        else if(nums[mid]>target)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    
    cout<<ans[0]<<" "<<ans[1];

    
    return 0;
}