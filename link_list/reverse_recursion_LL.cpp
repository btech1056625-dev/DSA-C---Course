#include<iostream>
#include<vector>
#include<algorithm>
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

void reverse(node* temp , node* front , node* prev){
    if(temp == NULL){
        node* t = prev;
        while (t)
        {
            cout<<t->data<<" ";
            t = t->next;
        }
        
        return;
    }
    front = temp->next;
    temp->next = prev;
    prev = temp;
    temp = front ;
    reverse(temp , front , prev);
}


int main(){
    vector<int> arr = {1,3,4,5,0};
    node* head;
    head = conversion(arr);
    node* temp = head;
    node* prev = NULL;
    node* front = temp->next;
    reverse(temp, front, prev);

    /*node* t = prev;
    while (t)
    {
        cout<<t->data<<" ";
        t = t->next;
    }*/
    

    return 0;
}