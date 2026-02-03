#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int count=0;
    for (int i = 1; i < n; i++)
    {
        if (i%2==0||i%3==0||i%5==0)
        {
            if (i==2||i==3||i==5)
            {
                count++;
            }
            
        }
        else if (i==1)
        {
            continue;
        }
        
        else
        {
            count++;
        }
        
    }
    cout<<"The total no. of prime no. in between 1 and n are: "<<count;

    return 0;
}