#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

struct node
{   int data;
    node* next;
    public:

    public:
    node( int head){
        data = head;
        next = NULL;
    }
    node(int head , node* next1 ){
        data= head;
        next = next1;
    }
    
};

node* conversion( vector<int> &arr){
    node* h= new node(arr[0]);
    node* mover= h;
    for (int i = 1; i < arr.size(); i++)
    {
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return h;
    
}

bool hasCycle(node* head) {

    unordered_map<node* , int> mp;

    node* temp = head;

    while(temp != NULL) {

        mp[temp]++;

        if(mp[temp] > 1) {
            return true;
        }

        temp = temp->next;
    }

    return false;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    node* head = conversion(arr);
    node* temp = head;
    node* thirdNode = NULL;
    node* tail = NULL;

    int count = 1;

    while(temp != NULL) {

        if(count == 3) {
            thirdNode = temp;
        }

        if(temp->next == NULL) {
            tail = temp;
        }

        temp = temp->next;
        count++;
    }

    tail->next = thirdNode;
    if (hasCycle(head)== true)
    {
        cout<<"Cycle is Detected"<<endl;
    }
    else{
        cout<<"Cycle is not detected."<<endl;
    }
    


    return 0;
}