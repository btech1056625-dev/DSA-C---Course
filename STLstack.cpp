#include<iostream>
#include<stack>
using namespace std;
int main(){
    // Works on the principle last-in-first-out.
    stack<string> s;
    s.push("Bhavya");
    s.push("Varshney");
    cout<<"The top element: "<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    

    return 0;
}