#include<iostream>
#include<map>          // The data will store with the help of key value ie. a key valuye will be mapping data element .
using namespace std;   // Every key must be unique and pointing towards only one element.
int main(){
    map<int,string> m;
    m[1]="Bhavya";
    m[13]="Varshney";
    m[2]="20";
    m.insert({5,"bheem"});
    cout<<"Before erase"<<endl;            // for implementation of unordered maps we use hash tables.
    for(auto i:m){                         // T.C.----> O(1).
        cout<<i.first<<" "<<i.second<<endl; // for the implementations of ordered maps we use 
                                            // red black trees or balanced tress.
    }                                       // In this case T.C.----> O(log(n)).
    cout<<m.count(-13)<<endl;
    //m.erase(13);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<m.count(-13)<<endl;

    auto it=m.find(5);
    for(auto i=it; it!=m.end(); i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }




    return 0;
}