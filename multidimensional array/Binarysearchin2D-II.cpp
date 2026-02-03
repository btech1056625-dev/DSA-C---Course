#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarysearch(int arr[][4], int n, int m , int target){
    int row=n-1;
    int col=m-1;
    int rowindex=0;
    int colindex=col;
    int ans1=-1;
    int ans2=-1;
    while ((rowindex<row)&&(colindex>=0))
    {
        int element = arr[rowindex][colindex];
        if (element==target)
        {
            ans1=rowindex;
            ans2=colindex;   
        }
        else if (element>target)
        {
            colindex--;
        }
        else
        {
            rowindex++;
        }
        
    }

    if (ans1==-1&&ans2==-1)
    {
        cout<<"The target element was not found.";
    }
    else
    {
        cout<<"The position of the target element is: "<<rowindex<<" and "<<colindex;
    }

    return 0;
    
    
}

int main(){
    int arr[3][4]={{1,4,7,11},{2,5,8,12},{3,6,9,16}};
    int target;
    cout<<"Enter the target value:";
    cin>>target;
    int x=binarysearch(arr, 3,4,target);
    return 0;
}