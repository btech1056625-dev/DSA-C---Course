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

node* insert_head( node* head, int val){
    node* temp = new node(val , head);
    return temp;
}

node* insert_tail( node* head, int val){
    node* temp = head;
    while (temp->next!= NULL)
    {   
        temp = temp->next;
        
    }
    //temp = temp->next;
    node* t = new node(val);
    temp->next = t;
    t->next  = nullptr;
    return head;
}

node* insert_kth(node* head, int k, int val){
    node* temp = head;
    node* prev = head;
    if (k==1)
    {
        node* t = new node(val , head);
        return t;   
    }
    else
    {
        for (int i = 1; i < k; i++)
        {
            prev = temp;
            temp = temp->next;   
        }
        temp= new node(val , temp);
        prev->next= temp;
        temp = temp->next;
        return temp ;
    }
    
    
    
}


int main(){
    vector<int> v = {12,16,20,24,28};
    node* head= conversion(v);

    int val;
    cout<<"Enter the value:";
    cin>>val;
    
    //head = insert_head(head, val);
    head = insert_tail(head , val);    


    node* temp = head;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    /*node* temp = head ;
    while (temp->next!= NULL)
    {   
        temp = temp->next;
        
    }
    temp->next = insert_tail(head, val);
    
    node* t= head;
    while (t)
    {
        cout<<t->data<<" ";
        t = t->next;
    }*/
    
    /*int k;
    cout<<"Enter the kth position:";
    cin>>k;

    if (k==1)
    {
        head = insert_kth(head, k, val );
        node* temp = head;
        while (temp)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
    else
    {
        node* temp = head;
        for (int i = 1; i < k; i++)
        {
            temp = temp->next;
        }
        temp = insert_kth(head, k, val);
        temp = temp->next;
        node* t = head;
        //cout<<temp->data<<" ";
        while (t)
        {
            cout<<t->data<<" ";
            t = t->next;
        }
        
        
    }*/


    return 0;
}