#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

vector<int> merge(vector<int> nums1, vector<int> nums2){
    sort(nums1.begin(),nums1.end(),greater<int>());
    sort(nums2.begin(),nums2.end(),greater<int>());
    for (int i = (nums1.size()-1); i > 0; i--)
    {
        if (nums1[i]==0)
        {
            nums1.pop_back();
        }
        
    }
    for (int i = (nums2.size()-1); i > 0; i--)
    {
        if (nums2[i]==0)
        {
            nums2.pop_back();
        }
        
    }
    for (int i = 0; i < nums2.size(); i++)
    {
        nums1.push_back(nums2[i]);
    }
    sort(nums1.begin(),nums1.end());
    return nums1;

    
}

int main(){
    vector<int> nums1={1,2,3,0,0,0};
    vector<int> nums2={2,5,6};
    vector<int> ans= merge(nums1,nums2);
    
    // Two pointers approach
    vector<int> nums3;
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    int s= max(nums1.size(),nums2.size());
    
    int i=0;
    int j=0;
    while (i<s)
    {
        if (nums1[i]>nums2[j])
        {
            nums3.push_back(nums2[j++]);
               
        }
        else if (nums1[i]==nums2[j])
        {
            nums3.push_back(nums2[j++]);
            nums3.push_back(nums1[i++]);
            
        }
        else
        {
            nums3.push_back(nums1[i++]);
            
        }    
    }
    while (i<(nums1.size()))
    {
        nums3.push_back(nums1[i++]);
    }
    while (j<(nums2.size()))
    {
        nums3.push_back(nums2[j++]);
    }
    
    
    
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }

    sort(nums3.begin(),nums3.end(),greater<int>());
    for (int i = (nums3.size()-1); i >(-1); i--)
    {
        if (nums3[i]==0)
        {
            nums3.pop_back();
        }
        
    }
    sort(nums3.begin(),nums3.end());
    for (int i = 0; i < nums3.size(); i++)
    {
        cout<<nums3[i]<<endl;
    }
    

    return 0;
}