#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct node{
    public:
    int data;
    node *next;
    public:
    node(int data1){
        data = data1;
        next = NULL;
    }
    node(int data1,  node* next1 ){
        data = data1;
        next = next1;
    }


};

struct nodes{
    public:
    int data;
    nodes *next;
    
    public:
    nodes(int data1, nodes* next1)
    {
        data = data1;
        next = next1;
    }

};

node* ConvertArr2LL(vector<int> &arr){
    node* head = new node(arr[0]);
    node* mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}





int main(){
    
   
    /*node *x = new node(5, NULL);
    cout<<x<<endl;
    int arr[4]={1,2,3,4};
    int y;
    for (int i = 0; i < 4; i++)
    {
        if (i==4)
        {
            int *y = new nodes(arr[i], NULL);
        }

        else
        {
            int *y = new nodes(arr[i], &arr[i+1]);
        }
        
        
    }
    cout<<y<<endl;*/
    vector<int> arr = {1,2,3,4,5};
    node* head = ConvertArr2LL(arr);
    cout<<head->data<<endl;
    int c=0;
    node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp= temp->next;
        c++;
    }
    cout<<endl;
    cout<<c<<endl;
    int n;
    cout<<"Enter the element:";
    cin>>n;
    bool result = false;
    node* t= head;
    while (t)
    {
        if (n==(t->data))
        {
            cout<<"Yes! Found.";
            result = true;
            break;
        }
        t=t->next;
        
    }
    if (result==false)
    {
        cout<<"No, The given element is not present in the link list.";
    }
    
    
    


    return 0;
}