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

int reverse(int d){
    int temp = 0;
    while (d!=0)
    {
        int r = d%10;
        temp = temp*10 + r;
        d= d/10;
    }
    return temp;

}

node* add(node* h1 , node* h2){
    node* t1 = h1;
    node* t2 = h2;
    node* head;
    int d1 = 0;
    int d2 = 0;
    int n = 0;
    vector<int> ans;
    while (t1)
    {
        int r = (t1->data);
        d1 = d1*10 + r;
        t1 = t1->next;
    }

    while (t2)
    {
        int r = (t2->data);
        d2 = d2*10 + r;
        t2 = t2->next;
    }
    d1 = reverse(d1);
    d2 = reverse(d2);
    n = d1+d2;
    cout<<n<<endl;
    while (n!=0)
    {
        int r = n%10;
        ans.push_back(r);
        n = n/10;
    }
    head = conversion(ans);
    return head;

    

    
    
}

int main(){

    vector<int> v1 = {2,1,1};
    vector<int> v2 = {2,3,5};
    node* head;

    node* h1 = new node(v1[0]);
    node* h2 = new node(v2[0]);

    h1 = conversion(v1);
    h2 = conversion(v2);

    head = add(h1 , h2);

    node* temp = head;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }








    return 0;
}