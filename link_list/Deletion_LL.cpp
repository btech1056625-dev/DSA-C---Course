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

node* delete_tail(node* head){
    node* temp = head;
    if (head==NULL|| head->next==NULL)
    {
        return NULL;
    }
    
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    
    return head;
}

node* delete_k(node* head, int k){
    node* temp = head; 
    if(k==1){
        head = head->next;
        delete temp;
        return head;
    }
    else
    {
        
        node* prev = NULL;
        for (int i = 1; i < k; i++)
        {   prev=temp;
            temp= temp->next;
        }
        
        
        prev->next=prev->next->next;
        delete temp;
        return head;
        
    }
}

node* delete_val(node* head, int val){
    node* temp = head; 
    if(val==(head->data)){
        head = head->next;
        delete temp;
        return head;
    }
    else
    {
        
        node* prev = NULL;
        while (temp!=NULL)
        {
            
            if ((temp->data)==val)
            {
                prev->next=prev->next->next;
                delete temp;
                break;
            }
            prev = temp;
            temp = temp->next;
            
        }
        return head; 
    }
}



int main(){
    vector<int> v = {10 , 12, 16 , 20, 24, 28, 30};
    node* head = conversion(v);
    /*cout<<"Head before deletion:"<<head->data;
    cout<<endl;
    node* temp = head;

    head = head->next;
    delete temp;
     
    cout<<"Head after the deletion:"<<head->data<<endl;
    head = delete_tail(head);
    temp =head;

    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }*/
    int k;
    cout<<"Enter the kth element:";
    cin>>k;
    
    head = delete_k(head, k);


    node* temp = head;

    while (temp)
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    }

    /*int val;
    cout<<"Enter the value:";
    cin>>val;
    temp = head;
    head = delete_val( head , val );

    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }*/
    return 0;
}