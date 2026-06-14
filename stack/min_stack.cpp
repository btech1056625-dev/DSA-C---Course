#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

int getMin(stack<int> st){
    vector<int> v;
    while (!st.empty())
    {
        v.push_back(st.top());
        st.pop();
    }
    sort(v.begin(), v.end());
    return v[0];
    
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(12);
    st.push(9);
    st.push(8);
    st.pop();
    cout<<"The Min:"<<getMin(st)<<endl;
    //st.push(7);
    st.push(1);
    st.pop();
    //cout<<st.top()<<endl;
    cout<<"The Min:"<<getMin(st)<<endl;

    

    return 0;
}