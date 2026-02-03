#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    vector<int> nums={4,5,6,7,0,1,2};
    int target=0;
    rotate(nums.begin(),nums.begin()+4,nums.end());
    /*int s=0;
    int e= nums.size()-1;
    int mid= s+(e-s)/2;
    int index=-1;
    while (s<=e)
    {
        if (nums[mid]==target)
        {
            index=mid;
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
    cout<<index;*/
    for (int i = 0; i <nums.size() ; i++)
    {
        cout<<nums[i]<<endl;
    }
    
    

    return 0;
}