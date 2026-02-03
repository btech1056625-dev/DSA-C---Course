#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(n%2==0||n%3==0||n%5==0)    
    {
        if (n==2||n==3||n==5)
        {
            cout<<"The number is a prime no.";
        }

        else if (n==1)
        {
            cout<<"The no. 1 is not a prime no.";
        }
        
        
        else
        {
            cout<<"The number is not a prime no.";
        }
        
    }

    else if (n==1)
    {
        cout<<"The no.1 is not a prime no."
    }
    

    else
    {
        cout<<"The number is a prime no.";
    }
    
    return 0;
}