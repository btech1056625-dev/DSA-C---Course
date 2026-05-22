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


node* add(node* head){
    node* temp = head;
    vector<int> arr;
    while (temp)
    {
        arr.push_back(temp->data);
        temp = temp->next;
    }
    int n = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        n = n*10 + arr[i];
    }
    n+=1;
    arr.clear();
    while (n!=0)
    {
        int d = n%10;
        arr.push_back(d);
        n = n/10;
    }
    int i , j ;
    i = 0;
    j = arr.size()-1;
    while (i<=j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    head = conversion(arr);
    return head;
    
    
}

int main(){
    vector<int> arr = {9,9,9};
    node* head;
    head = conversion(arr);
    head = add(head);

    node* temp = head;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    return 0;
}