#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int gcd(int a, int b){
    if (a==0)
    {
        return b;
    }
    if (b==0)
    {
        return a;
    }
    
    while (a!=b)
    {
        if (a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
        
    }
    return a;
    
    
}

int main(){
    // Euclids Algo
    /*gcd(a,b)= gcd(a-b,b)= gcd(a%b,b)*/
    // lcm(a,b)*gcd(a,b)=a*b.
    int a, b;
    cout<<"Enter the numbers:";
    cin>>a>>b;
    
    int x=gcd(a,b);
    cout<<x;
    

    return 0;
}