#include<iostream>
using namespace std;
int main(){
    int arr[4]={1,3,2,4};
    int s= sizeof(arr)/4;
    int arr1[4];
    
    
    /*for (int i = 0; i < s; i++)
    {
        int ans=arr[s-(i+1)];
        
        arr1[i]=ans;
    }
    for (int i = 0; i < s; i++)
    {
        cout<<arr1[i]<<endl;
    }*/
    
    for (int i = 0; i < (s+1)/2; i++)
    {
        int ans=arr[i];
        arr[i]=arr[s-(i+1)];
        arr[s-(i+1)]=ans;
        
    }
    
    for (int i = 0; i < s; i++)
    {
        cout<<arr[i]<<endl;
    }
    






   
    

    return 0;
}