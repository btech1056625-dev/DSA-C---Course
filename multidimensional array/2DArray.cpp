#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// T.C.----> O(n*m) if number of rows =! number of columns
// T.C.----> O(n*n) if number of rows = number of columns
/*bool ispresent(int arr[][3],int size1, int size2, int target){  
    for (int i = 0; i < size1; i++)  // When need specify the column parameter for defining the 2d array
    {
        for (int j = 0; j < size2; j++)
        {
            if(arr[i][j]==target){
                return true;
            }
        }
        
    }
    return false;
    
}*/

void rowwiseisesum(int arr[][3],int size1,int size2){
    int sum=0;
    int m[size1];
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            sum= sum+arr[i][j];

        }
        cout<<sum<<endl;
        m[i]=sum;
        sum=0;
    }
    int n=m[0];
    for (int i = 1; i < size1; i++)
    {
        if (n<m[i])
        {
            n=m[i];
        }
           
    }
    cout<<n<<endl;
    
    
}

int main(){
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //int arr1[2][2]={{1,2},{3,4}};
    //cout<<arr1[1][0]<<endl;
    /*int target;
    cout<<"Enter the target number: ";
    cin>>target;*/
    /*if(ispresent(arr,3,3,target)){
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }*/

    rowwiseisesum(arr,3,3);
    
    

    return 0;
}