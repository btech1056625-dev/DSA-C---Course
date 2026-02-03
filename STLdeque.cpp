#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    cout<<d.max_size()<<endl;     //Max_size remains same if else if all the elements remains same.
    d.push_back(1);
    d.push_front(2);     // pushing from front
    d.push_back(3);      // pushing from back
    //d.pop_back();        // poping from back
    //d.pop_front();       // poping form front
    for(int i:d){
        cout<<i<<endl;
    }
    cout<<"Value at 2nd index:"<<d.at(2)<<endl;
    cout<<"The front element:"<<d.front()<<endl;
    cout<<"The last element:"<<d.back()<<endl;
    cout<<"Empty or not? "<<d.empty()<<endl;
    d.erase(d.begin(),d.begin()+1);   // To delete a particular element---> T.C.---> O(n)
    d.erase(d.begin());               // We can also use this.
    for(int i:d){
        cout<<i<<endl;
    }
    cout<<d.max_size()<<endl;
    return 0;
}