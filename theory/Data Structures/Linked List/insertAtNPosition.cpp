// C++ program to insert a node at Nth position in a linkedlist

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

node* insert(node* head, int a, int x) {
    node* temp = new node();
    temp->data = a;
    node* temp2 = new node();
    temp2 = head;
    while(x>2) {
        x--;
        temp2 = temp2->next;
    }
    if(x == 1) {
        temp->next = head;
        head = temp;
        return head;
    }
    temp->next = temp2->next;
    temp2->next = temp;
    return head;
}

int main() {
    node* head = new node();
    head = NULL;

    int n;
    cout<<"Enter the number of elements in the list: ";
    cin>>n;

    for(int i=0; i<n; i++) {
        int a, j;
        cout<<"Enter the element to be inserted: ";
        cin>>a;
        cout<<"Enter the position of element to be inserted: ";
        cin>>j;
        head = insert(head, a, j);
        printLL(head);
    }
}