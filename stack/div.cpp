#include<iostream>
#include<cmath>
using namespace std;


int main(){

    int t; cin>>t;
    while (t--){
        int n, x,y,z;
        cin>>n>>x>>y>>z;
        int min = 0;
        min = ceil((double)n / (x+y));
        if(n < (z*x)){
            if(min > z){
                min = z;
            }
        }
        else{
            int min1 = 0;
            min1+= z;
            n-= (z*x);
            min1+= ceil((double)n / (x+(10*y)));
            if(min > min1){
                min = min1;
            } 
        }
        cout<<min<<endl;
    }


    return 0;
}