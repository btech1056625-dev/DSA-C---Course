#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int rotate(int arr[][3], int n ,int m){
    int arr1[n][m];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int t = j; t < (j+1); t++)
            {
                arr2[t]=arr[i][j];
            }
            
        }
        for (int t = 0; t < n; t++)
        {
            for (int k = (0+i); k < (i+1); k++)
            {
                arr1[t][k]=arr2[t];
            }
        
        }
        
    }
    for (int i = 0; i < 1; i++)
    {
        for (int j = (i+2); j <(i+3); j++)
        {
            for (int t = 0; t < n; t++)
            {
                swap(arr1[i][t],arr1[j][t]);
            }
            
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
       
}

int main(){
    int s[3][3]={{1,2,3},
                 {4,5,6},
                 {7,8,9}};
    int x=rotate(s,3,3);
    


    return 0;
}