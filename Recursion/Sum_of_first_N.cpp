#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// functional recursion
int s1(int n){
    int sum=0;
    if(n==0){
        return 0;
    }
    //sum=sum+n+s1(n-1);
    return n+s1(n-1);
    
}

// parameterised recursion
int s2(int n, int sum){
    if(n==0){
        return sum;

    }
    s2(n-1, sum+n);
}

int f1(int n){
    if(n==0){
        return 1;
    }
    return n*f1(n-1);
}

int f2(int n, int f){
    
    if(n==0){
        return f;
    }
    f2(n-1, f*n);

}

int main(){
    int n;
    cin>>n;
    int sum=0;
    int f=1;
    cout<<"Sum:"<<s1(n)<<endl;
    cout<<"Sum:"<<s2(n, sum)<<endl;
    cout<<"The factorial:"<<f1(n)<<endl;
    cout<<"The factorial:"<<f2(n, f)<<endl;


    return 0;
}