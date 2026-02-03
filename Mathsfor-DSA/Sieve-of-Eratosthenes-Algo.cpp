#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int countprimes(int n){
    vector<bool> prime(n, true);
    int count=0;
    prime[0]=prime[1]=false;
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;
            for (int j = 2*i; j < n; j=j+i)
            {
                prime[j]=false;
            }
            
        }
           
    }
    return count;
    
    
}

int main(){
    int n;
    int t;
    cout<<"Enter the number:";
    cin>>n;
    int count= countprimes(n);
    cout<<"The no. of prime no.s between 1 and n are:"<<count;
    
    // T.C.-----> O(n*log(log(n)))

    return 0;
}