#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node(){
            data = 0;
            next = NULL;
        }
        node(int a){
            this->data = a;
            this->next = NULL;
        }
};

class linkedList{
    public:
        node* head = NULL;

        void push(int a, int pos);
        void pop(int pos);

        void printit();
};

void linkedList::push(int a, int pos){
    node* temp = new node(a);
    if(head == NULL){
        head = temp;
        return;
    }
    node* temp2 = head;
    while(pos > 2){
        pos--;
        temp2 = temp2->next;
    }
    temp->next = temp2->next;
    temp2->next = temp;
    return;
}

void linkedList::printit(){
    node* temp = head;
    cout<<"Linked List is: ";
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    return;
}

void linkedList::pop(int pos){
    node* temp1 = head;
    if(pos == 1){
        head = head->next;
        delete(temp1);
        return;
    }
    while(pos>2){
        temp1 = temp1->next;
        pos--;
    }
    node* temp2 = temp1->next;
    temp1->next = temp2->next;
    delete(temp2);
    return;
}

class stack1{
    private:
        node* head = NULL;
    public:
        void push(int a);
        int pop();
};

void stack1::push(int a){
    node* temp = new node(a);
    temp->next = head;
    head = temp;
    return;
}

int stack1::pop(){
    int a = head->data;
    node* temp = head;
    head = head->next;
    delete(temp);
    return a;
}

void reverseit(linkedList l, stack1 s){
    node* temp = l.head;
    while(temp != NULL){
        s.push(temp->data);
        temp = temp->next;
    }
    temp = l.head;
    while(temp != NULL){
        temp->data = s.pop();
        temp = temp->next;
    }
    return;
}

int main(){
    linkedList l;
    stack1 s;

    cout<<"How many elements you want to insert in the linked list: "<<endl;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int a, pos;
        cout<<"Enter the element: "<<endl;
        cin>>a;
        cout<<"Enter the position at which "<<a<<" should be inserted: "<<endl;
        cin>>pos;
        l.push(a, pos);
    }

    // l.push(1, 1);
    // l.push(2, 2);
    // l.push(3, 3);
    // l.push(4, 4);
    // l.push(5, 5);

    // reverseit(l, s);

    l.printit();

    reverseit(l, s);

    l.printit();
    // node n(19);
    // cout<<n.data<<endl;
    // cout<<n.next<<endl;
}