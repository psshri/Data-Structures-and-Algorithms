// C++ program to insert at Nth position, delete at Nth position and reverse a 
// Linked List

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
    while(head != NULL) {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

node* deleteLL(node* head, int pos) {
    node* temp2 = head;
    node* temp1 = temp2->next;
    if(pos == 1) {
        head = temp1;
        delete(temp2);
        return head;
    }
    while(pos>2) {
        pos--;
        temp2 = temp1;
        temp1 = temp1->next;
    }
    temp2->next = temp1->next;
    delete(temp1);
    return head;
}

node* reverseLL(node* head) {
    node* temp3 = NULL;
    node* temp2 = head;
    node* temp1 = temp2->next;
    while(temp1 != NULL) {
        temp2->next = temp3;
        temp3 = temp2;
        temp2 = temp1;
        temp1 = temp1->next;
        // temp1->next = temp2;
    }
    temp2->next = temp3;
    head = temp2;
    return head;
}

int main() {
    node* head = new node();
    head = NULL;

    cout<<"Enter the number of elements you want to insert: ";
    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        cout<<"Enter the "<<i<<" element: ";
        int a;
        cin>>a;
        int pos;
        cout<<"Enter the position at which you want to enter "<<a<<": ";
        cin>>pos;
        head = insert(head, a, pos);
        printLL(head);
    }

    cout<<"Enter the number of elements you want to delete: ";
    int d;
    cin>>d;
    
    for(int i=0; i<d; i++) {
        int d2;
        cout<<"Enter the position of the element you want to delete: ";
        cin>>d2;
        head = deleteLL(head, d2);
        printLL(head);
    }

    cout<<"Now we are going to reverse the Linked List: "<<endl;
    head = reverseLL(head);
    printLL(head);
}