#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number:";
    cin>>x;
    int y=sizeof(x);
    
    for (int i = 1; i < y ; i++)
    {
        int t=pow(10,i);
        int z= x % t;
        cout<<z;
    }
    string
    

    return 0;
}