#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct node
{   
    public:
    int data;
    node* next;
    node* prev;
    

    public:
    node( int head){
        data = head;
        next = NULL;
        prev = NULL;
    }
    node(int head , node* next1, node* prev1 ){
        data= head;
        next = next1;
        prev = prev1;
    }
    
       
};

node* conversion( vector<int> &arr){
    node* h= new node(arr[0]);
    node* moverf = h;
    node* moverb = NULL;
    for (int i = 1; i < arr.size(); i++)
    {
        node* temp = new node(arr[i]);
        moverb = moverf;
        moverf->next = temp;
        moverf = temp;
    }
    return h;
}

node* delete_head(node* head){
    node* prev = head;
    head = head->next;
    head->prev = NULL;
    prev->next =NULL;
    delete prev;
    return head;
}

node* delete_tail(node* head){
    node* temp = head;
    while (temp->next->next!= NULL)
    {
        temp = temp->next;
    }

        node* t = temp->next;
        t->prev = NULL;
        temp->next = NULL;
        delete t;
        return head;
}

node* delete_kth(node* head, int k){
    node* temp = head;
    for (int i = 1; i < k; i++)
    {
        temp = temp->next;
    }
    node* a = temp->next;
    node* t = temp->next->next;
    temp->next = temp->next->next;
    a->prev = NULL;
    a->next = NULL;
    delete a;
    return head;

}

node* delete_val(node* head , int val){
    node* temp = head;
    while ((temp->next)->data != val)
    {
        temp =temp->next;    
    }
    node* a = temp->next;
    node* t = temp->next->next;
    temp->next = temp->next->next;
    a->prev = NULL;
    a->next = NULL;
    delete a;
    return head;
}




int main(){

    vector<int> v = {10,12,14,16,18,20};
    node* head = conversion(v);

    /*node* temp = head ;
    
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }*/

    /*head= delete_head(head);
    node* temp = head ;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next; 
    }*/

    //int k;
    //cin>>k;

    int val;
    cin>>val;

    head = delete_val(head , val);
    node* temp = head;

    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    

    


    


    return 0;
}