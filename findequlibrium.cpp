#include<iostream>
#include<algorithm>
using namespace std;

int find(int a[], int size){
    int i=1;
    int ans1;
    int ans2;
    while (i<size)
    {
        for (int j = 0; j < i; j++)
        {
            ans1+=a[j];
        }
        for (int t = (i+1); t < size; t++)
        {
            ans2+=a[t];
        }
        if (ans1==ans2)
        {
            return i;
        }
        i++;
        ans1=0;
        ans2=0;
        
    }
    return -1;
    
    
    
    

}

int main(){

    int arr[4]={1,2,0,3};
    cout<<find(arr,4);
    

    return 0;
}