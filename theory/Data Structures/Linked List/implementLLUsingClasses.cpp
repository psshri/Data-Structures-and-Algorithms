// implementation of linked list using classes
// operations: insert, delete, print, printReverse, reverse

#include<bits/stdc++.h>
using namespace std;

class node {
    public:
        int data;
        node* next;
    // public:
        node() {
            data = 0;
            next = NULL;
        }
        node(int data1) {
            data = data1;
            next = NULL;
        }
};

class linkedList {
    private:
        node* head;
    public:
        linkedList() {
            head = NULL;
        }

        void printLL();
        void printLLReverse();
        void printLLReverse1(node* temp);
        void insert(int data, int pos);
        void reverse();
        void deleteit(int pos);
};

void linkedList::reverse() {
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
    return;
    // return head;
}

void linkedList::deleteit(int pos) {
    node* temp = head;
    if(pos == 1) {
        head = head->next;
        delete(temp);
        return;
        // return head;
    }
    while(pos>2) {
        pos--;
        temp = temp->next;
    }
    node* temp2 = temp->next;
    temp->next = temp2->next;
    delete(temp2);
    return;
    // return head;
}

void linkedList::insert(int data, int pos) {
    node* n1 = new node(data);
    if(pos == 1) {
        n1->next = head;
        head = n1;
        return;
    }
    node* temp = head;
    while(pos>2) {
        pos--;
        temp = temp->next;
    }
    n1->next = temp->next;
    temp->next = n1;
    return;
}

void linkedList::printLL() {
    cout<<"Linked list: ";
    node* temp = head;
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    return;
}

void linkedList::printLLReverse1(node* temp) {
    if(temp == NULL) {
        return;
    }
    printLLReverse1(temp->next);
    cout<<temp->data<<" ";
}

void linkedList::printLLReverse() {
    node* temp = head;
    printLLReverse1(temp);
}

int main() {
    linkedList l;
    cout<<"Enter the number of elements you want to insert in the Linked List: ";
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        int a, pos;
        cout<<"Enter the "<<i+1<<" element: ";
        cin>>a;
        cout<<"Enter the position at which "<<a<<" should be inserted: ";
        cin>>pos;
        l.insert(a, pos);
        l.printLL();
        cout<<"Reversed LL: ";
        l.printLLReverse();
        cout<<endl;
    }
    // l.printLL();

    cout<<"Enter the number of elements you want to delete: ";
    int n1;
    cin>>n1;
    for(int i=0; i<n1; i++) {
        int pos;
        cout<<"Enter the position of "<<i+1<<" element: ";
        cin>>pos;
        l.deleteit(pos);
        l.printLL();
        cout<<"Reversed LL: ";
        l.printLLReverse();
        cout<<endl;
    }
    cout<<"Now I am going to reverse the Linked List: "<<endl;
    l.reverse();
    l.printLL();
}