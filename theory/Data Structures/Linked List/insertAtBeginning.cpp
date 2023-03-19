// insert a node at the beginning of the linked list

#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
};

node* insert(node* head, int a) {
    node* temp = new node();
    temp->data = a;
    temp->next = head;
    head = temp;
    return head;
}

void printLL(node* head) {
    while(head != NULL) {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main() {
    node* head = new node();
    head = NULL;
    
    int n;

    cout<<"Enter the number of elements to be inserted: ";
    cin>>n;

    for(int i=0; i<n; i++) {
        int a;
        cout<<"Enter the "<<i<<" element: ";
        cin>>a;
        head = insert(head, a);
        printLL(head);
    }
}