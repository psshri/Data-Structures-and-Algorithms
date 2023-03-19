// implementing linkedlist by passing address of head in function calls

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

void insert(node** pointerToHead, int a) {
    node* temp = new node();
    temp->data = a;
    temp->next = *pointerToHead;
    *pointerToHead = temp;
}

int main() {
    node* head = new node();
    head = NULL;

    int n;
    cout<<"How many numbers you want to insert: ";
    cin>>n;

    for(int i=0; i<n; i++) {
        int a;
        cout<<"Enter the "<<i<<" element: ";
        cin>>a;
        insert(&head, a);
        printLL(head);
    }
}