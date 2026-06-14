#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//stack
void push(vector<int> &arr , int n){
    arr.push_back(n);
    
}

void pop(vector<int> &arr){
    arr.erase(arr.begin() , arr.begin()+arr.size());
    
}
int top(vector<int> &arr){
    return arr[arr.size()-1];
}


int main(){
    vector<int> arr ;
    push(arr , 3);
    push(arr , 4);
    push(arr , 5);
    pop(arr);
    int t = top(arr);
    cout<<t<<endl;


    return 0;
}