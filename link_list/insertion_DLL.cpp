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

node* insertion_head( node* head, int val){
    node* n= new node(val);
    n->prev = NULL;
    n->next = head;
    head->prev = n;
    head = n;
    return head ;
    
}

node* insert_before_tail(node* head, int val) {
    node* n = new node(val);

    // empty list
    if (head == NULL) return n;

    // only one node
    if (head->next == NULL) {
        n->next = head;
        head->prev = n;
        return n;
    }

    node* temp = head;

    // move temp to second last node
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    node* tail = temp->next;

    temp->next = n;
    n->prev = temp;
    n->next = tail;
    tail->prev = n;

    return head;
}

node* insertion_before_kth( node* head , int val , int k){
    node* n = new node(val);
    node* temp = head;

    for (int i = 1; i < k-1; i++)
    {
        temp = temp->next;
    }
    node* t = temp->next;
    temp->next = n;
    n->prev = temp ;
    n->next = t;
    t->prev = n;
    

    return head;
}

node* insertion_before_kth_value(node* head , int val1 , int val2){
    node* n= new node(val1);
    node* temp = head;
    while ((temp->next)->data != val2)
    {
        temp = temp->next;
    }
    node* t= temp->next;
    temp->next = n;
    n->prev = temp;
    n->next = t;
    t->prev = n;
    return head;
}



int main(){
    vector<int> v = {10,12,14,16,18,20};
    node* head = conversion(v);

    int n;
    cin>>n;
    int k ; cin>>k;
    head = insertion_before_kth_value(head , n , k);
    node* temp = head;

    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    } 




    return 0;
}