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

node* middle(node* head){

    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    

    node* temp = head;
    int n = 0;
    while (temp)
    {
        n++;
        temp = temp->next;
    }
    temp = head;
    
    n = n/2;
    for (int i = 0; i < n; i++)
    {
        temp = temp->next;
    }
    return temp;

    
}


int main(){
    vector<int> arr = {1,2,3,4,5};
    node* head = conversion(arr);

    node* temp = middle(head);

    cout<<temp->data;


    return 0;
}