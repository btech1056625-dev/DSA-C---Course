#include<iostream>
#include<vector>
using namespace std;

struct node
{
    int data;
    node* next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

node* conversion(vector<int> &arr)
{
    node* head = new node(arr[0]);
    node* mover = head;

    for(int i=1; i<arr.size(); i++)
    {
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

node* reverse(node* head)
{
    node* temp = head;
    node* prev = NULL;

    while(temp)
    {
        node* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }

    return prev;
}

bool palindrome(node* head)
{
    // empty or single node
    if(head == NULL || head->next == NULL)
    {
        return true;
    }

    // find middle
    node* slow = head;
    node* fast = head;

    while(fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    // reverse second half
    node* newHead = reverse(slow->next);

    // compare
    node* first = head;
    node* second = newHead;

    while(second)
    {
        if(first->data != second->data)
        {
            return false;
        }

        first = first->next;
        second = second->next;
    }

    return true;
}

int main()
{
    vector<int> arr = {1,2,1,1};

    node* head = conversion(arr);

    if(palindrome(head))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}