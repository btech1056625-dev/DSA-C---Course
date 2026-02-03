#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector<int> v={1,2,32,4,5};
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    sort(v.end(),v.begin());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    

    return 0;
}