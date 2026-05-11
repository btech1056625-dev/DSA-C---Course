#include <iostream>
#include <vector>
using namespace std;

struct node {
    int data;
    node* next;

    node(int head) {
        data = head;
        next = NULL;
    }

    node(int head, node* next1) {
        data = head;
        next = next1;
    }
};

node* conversion(vector<int>& arr) {
    if (arr.size() == 0) return NULL;

    node* h = new node(arr[0]);
    node* mover = h;

    for (int i = 1; i < arr.size(); i++) {
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return h;
}

node* seg(node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    node* odd = head;
    node* even = head->next;
    node* evenHead = even;

    while (even != NULL && even->next != NULL) {
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenHead;
    return head;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
    node* head = conversion(v);

    head = seg(head);

    node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}