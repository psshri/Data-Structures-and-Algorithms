// print elements of a linked list using recursion

#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
};

node* insert(node* head, int a, int pos) {
    node* temp1 = new node();
    temp1->data = a;
    temp1->next = NULL;
    node* temp2 = head;
    if(pos == 1) {
        temp1->next = head;
        head = temp1;
        return head;
    }
    while(pos>2) {
        pos--;
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
    return head;
}

void printLL(node* head) {
    if(head == NULL) {
        cout<<endl;
        return;
    }
    cout<<head->data<<" ";
    printLL(head->next);
}

void printLLR(node* head) {
    if (head == NULL) {
        return;
    }
    printLLR(head->next);
    cout<<head->data<<" ";
}

int main() {
    node* head = new node();
    head = NULL;

    cout<<"Enter the number of elements you want to insert: ";
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        cout<<"Enter the "<<i+1<<" element: ";
        int a;
        cin>>a;
        int pos;
        cout<<"Enter the position at which "<<a<<" is to be inserted: ";
        cin>>pos;
        head = insert(head, a, pos);
        printLL(head);
        printLLR(head);
        cout<<endl;
    }
}