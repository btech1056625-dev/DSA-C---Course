#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// BACK TRACKING METHOD
// In this method we first go to the end of the recursion and then we print the value of n while returning back to the main function.
// T.C. ----> O(n) and S.C. ----> O(n) because of the recursive stack.

void f(int n,int t){
    
    if(n>t){
        return;
    }
    f(n+1, t);
    cout<<n<<endl;
    
    
}

int main(){
    int n;
    cin>>n;
    int i=0;
    f(i,n);


    return 0;
}