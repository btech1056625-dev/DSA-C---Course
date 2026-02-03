#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    vector<int> nums={3,2,2,3};
    int val=2;
    sort(nums.begin(),nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i]==val)
        {
            nums.erase(nums.begin()+i);
            i--;
        }
        
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<endl;
    }
    


    return 0;
}