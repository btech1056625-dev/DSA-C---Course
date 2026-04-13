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



node* conversion(vector<int>& arr) {
    if (arr.size() == 0) return NULL;

    node* h = new node(arr[0]);
    node* mover = h;

    for (int i = 1; i < arr.size(); i++) {
        node* temp = new node(arr[i]);
        mover->next = temp;
        temp->prev = mover;   // important
        mover = temp;
    }

    return h;
}
node* reverse(node* head){
    node* t1 = head;
    node* t2 = head;
    int i = 0;
    int j = 0;
    while (t2->next != nullptr)
    {
        t2 = t2->next;
        j++;
    }
    while (i<=j)
    {
        swap((t1->data),(t2->data));
        
        t1 = t1->next;
        t2 = t2->prev;
        i++;
        j--;
    }
    return head;
    
    

}

int main(){
    vector<int> v = {10 ,12, 14, 16, 18, 20};
    node* head = new node(v[0]);

    head = conversion(v);

    head = reverse(head);

    node* temp = head;

    for (int i = 0; i < v.size(); i++)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    



    return 0;
}