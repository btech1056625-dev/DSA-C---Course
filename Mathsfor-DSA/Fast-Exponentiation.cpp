#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*int mod(int x, int n, int m){
    if (n%2==0)
    {
        for (int i = 1; i < ((n/2)+1); i++)
        {
            int x= x*x;
        }
        
        x=x*x;
        int result=x%m;
        return result;
    }

    else
    {
        for (int i = 1; i < ((n/2)+1); i++)
        {
            int x=x*x;
        }
        x=((x*x)*x)%m;
        return x;
    }

    
    
}

int mod1(int x, int n, int m){
    if (n==0)
    {
        return 1;
    }
    long long int result=mod1(x,n/2,m);
    result=(result*result)%m;
    if (n%2==0)
    {
        return result;
    }
    else
    {
        return (result*x)%m;
    }
}*/

int mod2(int x, int n, int m){
    int r=1;
    while (n>0)
    {
        if (n&1)                  // n&1 for even and odd and by taking the last bit of n
        {  // Odd
            r=((r%m)*(x%m))%m
            
        }
        x=((x%m)*(x%m))%m;
        n=n>>1;
    }
    return r;
    
    
}

int main(){
    // n^m    
    // T.C.---> O(log(m))
    int x,n,m;
    cout<<"Enter the required numbers:";
    cin>>x>>n>>m;
    int t= mod2(x,n,m);
    cout<<t;
    


    return 0;
}