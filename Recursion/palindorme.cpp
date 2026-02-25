#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void p(string s, int i){
    
    int n= s.length();
    if(i>=(n/2)){
        cout<<"true"<<endl;
    }
    else if (s[i]==s[n-i-1])
    {
        
        p(s, i+1);
    }
    else
    {
        cout<<"false"<<endl;
    }
}

int main(){
    string s="madam";
    int i=0;
    p(s,i);
    

    return 0;
}