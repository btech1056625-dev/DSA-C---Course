#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    string t;

    cin>>s;
    cin>>t;
    int c=0;

    if (s.length()<t.length())
    {
        cout<<0;
        return 0;
    }
    else{

        for (int i = 0; i < (s.length()-t.length()+1); i++)
    {
        string x= s.substr(i, t.length());
        if (x==t)
        {
            c++;
        }
        
    }
    cout<<c;

    }
    

    
    return 0;

    
    
    
    
    

}
