#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n= sizeof(arr)/sizeof(arr[0]);
    int m= sizeof(arr[0])/sizeof(arr[0][0]);
    //cout<<n<<endl;
    //cout<<m<<endl;
    int ans1=0;
    int ans2=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((i==j)&&(i+j==(n-1)))
            {
                ans1=ans1+arr[i][j];
                ans2=ans2+arr[i][j];   
            }   
            else if (i==j)
            {
                ans1=ans1+arr[i][j];
            }
            
            else if (i+j==(n-1))
            {
                ans2=ans2+arr[i][j];
            }
            
        }
        
    }
    if (ans1<ans2)
    {
        cout<<"The difference is: "<<(ans2-ans1);

    }
    else if (ans1>ans2)
    {
        cout<<"The difference is: "<<(ans1-ans2);
    }
    else
    {
        cout<<"The difference is: "<<(ans2-ans1);   
    }
    
    
    

    return 0;
}