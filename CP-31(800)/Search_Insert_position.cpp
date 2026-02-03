#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int search(vector<int> nums, int target){
    int ans=-1;
    int s=0;
    int e=nums.size()-1;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if (nums[mid]==target)
        {
            ans=mid;
            s=mid+1;
        }
        else if (nums[mid]>target)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
        
    }
    s=0;
    e=nums.size()-1;
    mid=s+(e-s)/2;

    if (ans==-1)
    {
        nums.push_back(target);
        sort(nums.begin(),nums.end());
        while (s<=e)
        {
            if (nums[mid]==target)
            {
                return mid;

            }
            else if (nums[mid]>target)
            {
                e=mid-1;
            }
            
            else
            {
                s=mid+1;
            }
            mid=s+(e-s)/2;   
        } 
    }
    else
    {
        return ans;
    }
    
    
    
}

int main(){
    vector<int> v={1,3,5,6};
    int target=0;
    int x= search(v, target);
    cout<<x;


    return 0;
}