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

node* remove(node* head , int n){

    node* temp = head;

    if (n<0)
    {
        return head;
    }
    else if (n==0)
    {
        head = head->next;
        temp->next = NULL;
        delete temp;
        return head;
    }
    
    for(int i = 1; i<n; i++){
        temp = temp->next;
    }
    
    node* t;
    t = temp->next;
    temp->next = t->next;
    t->next= NULL;
    delete t;

    return head;

}



int main(){
    vector<int> arr = {1,2,3,4,5};
    int n;
    cout<<"Enter the node position:";
    cin>>n;
    node* head;
    head= conversion(arr);
    int x = arr.size() - n; 

    head = remove(head , x);

    node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }


    return 0;
}