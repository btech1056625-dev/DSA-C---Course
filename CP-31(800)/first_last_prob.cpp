#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int first(vector<int>& nums, int target){
    int s=0;
    int e=nums.size()-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        
        if(nums[mid]==target){
            ans=mid;
            e=mid-1;
        }
        else if(nums[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    //ans=mid;
    return ans;
}
int second(vector<int> nums, int target)
{
    int s=0;
    int e=nums.size()-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(nums[mid]==target){
            ans=mid;
            s=mid+1;
        }
        else if(nums[mid]>target){
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        
        mid=s+(e-s)/2;
    }
    return ans;
}


int main(){
    vector<int> nums={3,8,8,11,22};
    int target=8;
    
    int x=first(nums, target);
    int y= second(nums, target);
    cout<<x<<" "<<y;


    return 0;
}