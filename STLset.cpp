#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;    // set will only take the unique elements and no modifications will takes place.
    s.insert(5);
    s.insert(0);
    s.insert(2);
    s.insert(5);
    s.insert(3);
    s.insert(1);
    s.insert(6);            // T.C. of all the elements is O(log(n)).
    s.find(0);
    s.erase(s.find(6));
    for(auto i : s){
        cout<<i<<endl;
    }
    //set<int>::iterator it =s.begin();
    //it++;
    //s.erase(it);

    for(auto i: s){
        cout<<i<<endl;
    }
    cout<<"5 is present or not?"<<s.count(5)<<endl;
    set<int>::iterator itr = s.find(5);
    cout<<*itr<<endl;
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<endl;
    }

    pair<int, string> p;
    p={9, "bhavya"};

    multiset<int> ms;
    

    return 0;
}