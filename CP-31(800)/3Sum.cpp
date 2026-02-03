#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> num={-1,0,1,2,-1,-4};
    sort(num.begin(),num.end());
    for (int i = 0; i <num.size() ; i++)
    {
        for (int j = i; j < num.size(); j++)
        {
            for (int t = j; t < num.size(); t++)
            {
                if(num[i]+num[j]+num[t]==0)
                {
                    cout<<num[i]<<" "<<num[j]<<" "<<num[t]<<endl;
                } 
            }
            
        }
        
    }
    
    


    


    return 0;
}