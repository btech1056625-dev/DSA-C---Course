#include<iostream>
#include<queue>
using namespace std;
int main(){
    //max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    cout<<maxi.size()<<endl;
    int m=maxi.size();
    for (int i = 0; i <m; i++)
    {
        cout<<maxi.top()<<endl;
        maxi.pop();
    }  
    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(4);
    int n=mini.size();
    for (int i = 0; i < n; i++)
    {
        cout<<mini.top()<<endl;
        mini.pop();
    }
    

    return 0;
}