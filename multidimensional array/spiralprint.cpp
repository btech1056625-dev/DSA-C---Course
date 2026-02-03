#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int spiral( int arr[][4], int n , int m){
    int l=n+m-1;
    int i=0;
    int j=0;
    int t=0;
    while (i<l)
    {
        if (j==0)
        {
            for (int x = t; x < (t+1); x++)
            {
                for (int y = 0; y < m; y++)
                {
                    cout<<arr[x][y]<<" ";
                }
                
            }
            j++;
        }
        else if (j==1)
        {
            for (int x = t; x < (n+1); x++)
            {
                for (int y = (m-1); y >(m-2); y--)
                {
                    cout<<arr[x][y]<<" ";
                }
                
            }
            j++;
        }
        else if (j==2)
        {
            for (int x = (n-1); x >(n-2); x--)
            {
                for (int y = (m-1); y >(t-1)  ; y--)
                {
                    cout<<arr[x][y]<<" ";
                }
                
            }
            j++;
            n--;
            m--;
            
        }
        else if (j==3)
        {
            for (int x = (n); x>0; x--)
            {
                for (int y =0 ; y > (-1); y--)
                {
                    cout<<arr[x][y]<<" ";
                    n=y;
                }
                
            }
            j=0;
            t++;
        }
        



        i++;
        
           
    }
    return 0;
    
}

int main(){
    int n;
    cout<<"Enter the value of no. of rows:";
    cin>>n;
    //cout<<"Enter the value of no. of columnes:";
    //cin>>m;
    int s[n][4];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<"Enter the value :";
            cin>>s[i][j];
        }
        
    }
    int y =spiral(s,n,4);
    // t.c.----> O(n*m)


    return 0;
}