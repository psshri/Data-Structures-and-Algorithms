// complete implementation of a linked list (iterative method)
// operations: insert, print, delete, reverse 

#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
};

void printLL(node* head) {
    cout<<"Linked list: ";
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
    while(pos > 2) {
        pos--;
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
    return head;
}

node* deleteit(node* head, int pos) {
    node* temp1 = head;
    if(pos == 1) {
        head = head->next;
        delete(temp1);
        return head;
    }
    while(pos > 2) {
        pos--;
        temp1 = temp1->next;
    }
    node* temp2 =  temp1->next;
    temp1->next = temp2->next;
    delete(temp2);
    return head;
}

node* reverse(node* head) {
    node* prev = NULL;
    node* curr = head;
    node* next = head->next;
    while(next != NULL) {
        curr->next = prev;
        prev = curr;
        curr = next;
        next = next->next;
    }
    curr->next = prev;
    head = curr;
    return head;
}

int main() {
    node* head = new node();
    head = NULL;

    cout<<"Enter the number of elements you want to insert in a linked list: ";
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        int a, pos;
        cout<<"Enter the "<<i+1<<" element: ";
        cin>>a;
        cout<<"Enter the position at which "<<a<<" should be inserted: ";
        cin>>pos;
        head = insert(head, a, pos);
        printLL(head);
    }

    cout<<"Enter the number of elements you want to delete: ";
    int n2;
    cin>>n2;
    for(int i=0; i<n2; i++) {
        cout<<"Enter the position of "<<i+1<<" element: ";
        int pos;
        cin>>pos;
        head = deleteit(head, pos);
        printLL(head);
    }

    cout<<"Now we are going to reverse the Linked List: ";

    head = reverse(head);

    printLL(head);

}