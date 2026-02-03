#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int main(){
    // Works on the principle first-in-first-out.
    // It is basically treated as a line.
    queue<string> q;
    q.push("Bhavya");
    q.push("Varshney");
    q.push("Btech/10566/25");

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.swap();
    cout<<q.front()<<endl;


    
    return 0;
}