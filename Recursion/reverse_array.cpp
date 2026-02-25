#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reverse(int arr[5], int size, int i){
    if(i==(size/2)){
        for (int j = 0; j < size; j++)
        {
            cout<<arr[j]<<endl;
            
        }
        return;
        
    }
    swap(arr[i], arr[size-i-1]);
    reverse(arr ,size, i+1);


}

int main(){
    int arr[5]={1,2,3,4,5};
    int i=0;
    reverse(arr, 5, i);


    return 0;
}