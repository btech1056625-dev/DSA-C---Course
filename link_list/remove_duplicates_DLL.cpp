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

node* conversion(vector<int>& arr)
{
    if (arr.empty()) return NULL;

    node* head = new node(arr[0]);
    node* mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        node* temp = new node(arr[i]);

        mover->next = temp;
        temp->prev = mover; 
        mover = temp;
    }

    return head;
}

node* remove_dupl(node* head){
    node* temp = head;

    while (temp)
    {
        node* nextNode = temp->next;  

        if (temp->data == nextNode->data)
        {
            
            if (temp->prev)
                temp->prev->next = temp->next;
            else
                head = temp->next;     

            
            if (temp->next)
                temp->next->prev = temp->prev;

            delete temp;
        }

        temp = nextNode;
    }

    return head;
    
}

int main(){
    vector<int> arr = {1,1,1,2,3,4,4};
    node* head;
    head = conversion(arr);
    head = remove_dupl(head);
    node* temp = head;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    

    return 0;
}