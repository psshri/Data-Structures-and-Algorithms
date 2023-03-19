// implementation of linked list (recursive method)
// operations: insert, print, printReverse, delete, reverse

#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
};

void printLL(node* head) {
    if(head == NULL) {
        cout<<endl;
        return;
    }
    cout<<head->data<<" ";
    printLL(head->next);
}

void printLLReverse(node* head) {
    if(head == NULL) {
        return;
    }
    printLLReverse(head->next);
    cout<<head->data<<" ";
}

node* insert(node* head, int a, int pos) {
    if(pos == 1) {
        node* temp = new node();
        temp->data = a;
        temp->next = head;
        head = temp;
        return head;
    }
    head->next = insert(head->next, a, pos-1);
    return head;
}

node* deleteit(node* head, int pos) {
    if(pos == 1) {
        node* temp = head;
        head = head->next;
        delete(temp);
        return head;
    }
    head->next = deleteit(head->next, pos-1);
    return head;
}

void reverse(node** pHead, node* head) {
    if(head->next == NULL) {
        *pHead = head;
        return;
    }
    reverse(pHead, head->next);
    head->next->next = head;
    head->next = NULL;
}

node* reverseit(node* Head, node* head) {
    if(head->next == NULL) {
        Head = head;
        return Head;
    }
    Head = reverseit(Head, head->next);
    head->next->next = head;
    head->next = NULL;
    return Head;
}

int main() {
    node* head = new node();
    head = NULL;

    cout<<"Enter the number of elements you want to insert: ";
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        int a, pos;
        cout<<"Enter the "<<i+1<<" element: ";
        cin>>a;
        cout<<"Enter the position at which "<<a<<" should be inserted: ";
        cin>>pos;
        head = insert(head, a, pos);
        cout<<"Linked List is: ";
        printLL(head);
        cout<<"Reverse Linked List is: ";
        printLLReverse(head);
        cout<<endl;
    }

    cout<<"Enter the number of elements you want to delete: ";
    int n2;
    cin>>n2;
    for(int i=0; i<n2; i++) {
        cout<<"Enter the position of "<<i+1<<" element you want to delete: ";
        int pos;
        cin>>pos;
        head = deleteit(head, pos);
        printLL(head);
    }

    cout<<"Now we are going to reverse the Linked List: ";
    head = reverseit(head, head);
    printLL(head);
}