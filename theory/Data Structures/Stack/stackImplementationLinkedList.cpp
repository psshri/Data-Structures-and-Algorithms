// implementing a stack using linked list

#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
};

node* top = NULL;

void push(int a) {
    node* temp = new node();
    temp->data = a;
    temp->next = NULL;
    if(top == NULL) {
        top = temp;
        return;
    }
    temp->next = top;
    top = temp;
    return;
}

void Top() {
    if(top == NULL){
        cout<<"The stack is empty."<<endl;
        return;
    }
    cout<<"The Topmost element is: "<<top->data<<endl;
    return;
}

void isEmpty(){
    if(top == NULL){
        cout<<"The stack is empty."<<endl;
        return;
    }
    cout<<"The stack is not empty"<<endl;
    return;
}

void pop(){
    if(top == NULL){
        cout<<"The stack is empty, nothing to pop."<<endl;
        return;
    }
    node* temp = top;
    top = top->next;
    delete(temp);
    return;
}


int main() {
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    Top();
    pop();
    Top();
    isEmpty();
}