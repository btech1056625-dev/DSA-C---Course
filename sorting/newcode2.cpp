#include<iostream>
#include<string>

using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int c=0;
        string s;
        string t;
        cin>>s;
        cin>>t;
        for(auto j: s){
            for(auto k: t){
                if (j==k)
                {
                    c++;

                }
                
            }
        }
        if (c==n)
        {
            cout<<"yes";

        }
        else
        {   cout<<c<<endl;
            cout<<"no";
        }
        
        


    }
    

    return 0;
}