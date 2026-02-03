#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarysearch(int arr[3][4], int n, int m, int target){
    int row= n-1;
    int col= m-1;
    int s2=0;
    int e2=m-1;
    int mid2= s2+(e2-s2)/2;
    int ans1=-1;
    int ans2=-1;
    for (int i = 0; i < n; i++)
    {
        while (s2<=e2)
        {
            if (arr[i][mid2]==target)
            {
                ans1=i;
                ans2=mid2;
                break;
            }
            
            else if (arr[i][mid2]>target)
            {
                e2=mid2-1;
            }
            
            else if (arr[i][mid2]<target)
            {
                s2=mid2+1;
            }

            mid2= s2+(e2-s2)/2;
            
        }
        s2=0;
        e2=m-1;
        mid2= s2+(e2-s2)/2;

        
    }

    if (ans1==-1 && ans2==-1)
    {
        cout<<"The position of the target number in the matrix is: -1 and -1";
    }
    else
    {
        cout<<"The position of the target number in the matrix is: "<<ans1<<" and "<<ans2;
        
    }
    // T.C.----> O(log(n*m))

    // Alternate Method
    /*int s=0;
    int e= row*col-1;
    int mid= s+(e-s)/2;

    while (s<=e)
    {
        int element = arr[mid/col][mid%col];  // for accessing any element in the matrix
        if (element==target)
        {
            cout<<"The position of the given the target is: "<<(mid/col)<<" and "<<(mid%col);
        }
        else if (element>target)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
        
    }*/
    
    
    return 0;
}

int main(){
    int arr[3][4]={{1,4,7,11},
                   {2,5,8,12},
                   {3,6,9,16}};
    int target;
    cout<<"Enter the target:";
    cin>>target;
    int x= binarysearch(arr,3,4, target);
    

    return 0;
}