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

node* sorting(node* head , int n){
    node* temp = head;
    node* t1 = temp->next;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if ((temp->data)>(t1->data))
            {
                swap((temp->data), (t1->data));
                t1 = t1->next;
            }
            else
            {
                t1 = t1->next;
            }
            
            
        }
        temp = temp->next;
        t1 = temp->next;

    }
    return head;
    
}


int main(){
    vector<int> arr = {1,0,1,2,0,2,1,0};
    node* head;
    head = conversion(arr);

    head = sorting(head , arr.size());

    node* temp = head;

    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    


    return 0;
}