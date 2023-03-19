// C++ program to delete a node at Nth position

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

node* deleteit(node* head, int pos) {
    node* temp1 = head;
    node* temp2 = head->next;
    if(pos == 1) {
        head = temp2;
        delete(temp1);
        return head;
    }
    while(pos>2) {
        pos--;
        temp1 = temp2;
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    delete(temp2);
    return head;
}

int main() {
    node* head = new node();
    head = NULL;

    cout<<"Enter the number of elements you want to insert in the node: ";
    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        int a;
        cout<<"Enter the element you want to insert: ";
        cin>>a;
        int pos;
        cout<<"Enter the position of the element: ";
        cin>>pos;
        head = insert(head, a, pos);
        printLL(head);
    }

    

    int m;
    cout<<"Enter how many elements you want to delete: ";
    cin>>m;

    for(int i=0; i<m; i++) {
        int a;
        cout<<"Enter the position of the element you want to delete: ";
        cin>>a;
        head = deleteit(head, a);
        printLL(head);
    }
}