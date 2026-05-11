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

node* reverse(node* head , int n){
    if(head==NULL || head->next==NULL){
        return head;
    }

    node* t1 = head;
    node* t2 = head;
    int t = n/2;
    int j=0;
    while (t--)
    {   
        for (int i = 1; i < n-j; i++)
        {
            t2 = t2->next;
        }
        swap((t1->data) , (t2->data));
        t2 = head;
        t1 = t1->next;
        j++;
        
    }
    return head;
    
}


int main(){

    vector<int> arr = {1,3,2,5,0};
    node* head;
    head = conversion(arr);
    head = reverse(head, arr.size());

    node* temp = head ;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }


    return 0;
}