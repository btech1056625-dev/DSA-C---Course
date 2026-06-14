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




node* delete_occurrence(node* head, int key)
{
    node* temp = head;

    while (temp)
    {
        node* nextNode = temp->next;  

        if (temp->data == key)
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

    vector<int> arr = {1 , 15 , 4 , 10 , 3 , 10 };
    node* head;
    head = conversion(arr);
    int key;
    cout<<"Enter the key:";
    cin>>key;
    head = delete_occurrence(head , key);

    node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }



    return 0;
}