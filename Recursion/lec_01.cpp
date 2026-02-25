#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void f(int N){
    
    if(N<0){
        return;
    }
    cout<<N<<endl;
    
    N--;
    f(N);

}

int main(){

    int N;
    cin>>N;
    f(N);



    return 0;
}