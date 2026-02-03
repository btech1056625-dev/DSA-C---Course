#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    int i=0;
    while (i<3)
    {
        if (i%2==0)
        {
            for (int j = 0; j < 3; j++)
            {
                cout<<arr[j][i]<<" ";
            }
            
        }
        
        else
        {
            for (int j = 2; j > (-1); j--)
            {
                cout<<arr[j][i]<<" ";
            }
            
        }
        i++;
        
    
    }
    
    

    return 0;
}