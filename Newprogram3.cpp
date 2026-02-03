#include<iostream>
using namespace std;

int search(int a[] , int x){
    int ans=-1;
    for (int i = 0; i < sizeof(a); i++)
    {
        if (a[i]==x)
        {
            ans=i;
            return ans;
        }
        
    }
    return ans;
}

int main(){
    int arr[4]={1,2,3,4};
    int x;
    cout<<"Enter the number:";
    cin>>x;
    cout<<search(arr,x);


    return 0;
}
