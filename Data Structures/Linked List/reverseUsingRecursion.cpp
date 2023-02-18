// reverse a linked list using recursion

#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
};

void printLL(node* head) {
    while(head != NULL) {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

node* insert(node* head, int a, int pos) {
    node* temp1 = new node();
    temp1->data = a;
    temp1->next = NULL;
    if(pos == 1) {
        temp1->next = head;
        head = temp1;
        return head;
    }
    node* temp2 = head;
    while(pos>2) {
        pos--;
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
    return head;
}

node* reverse(node* p, node* head) {
    if(p->next == NULL) {
        head = p;
        return head;
    }
    head = reverse(p->next, head);
    node* q = p->next;
    q->next = p;
    p->next = NULL;
    return head;
}

int main() {
    node* head = new node();
    head = NULL;

    cout<<"Enter the number of elements you want to insert: ";
    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        int a;
        int pos;
        cout<<"Enter the "<<i+1<<" element: ";
        cin>>a;
        cout<<"Enter the position at which "<<a<<" should be inserted: ";
        cin>>pos;
        head = insert(head, a, pos);
        printLL(head);
    }

    cout<<"Now we are going to reverse the Linked List: "<<endl;
    head = reverse(head, head);
    printLL(head);
}