// implement a stack using linked list in object oriented way

#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(){
            data = 0;
            next = NULL;
        }
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

class Stack{
    Node* top;

    public:
        Stack(){
            top = NULL; 
        }

        void push(int a);

        void pop();

        void Top();

        void isEmpty();
};

void Stack::push(int a){
    Node* temp = new Node(a);
    if(top == NULL){
        top = temp;
        return;
    }
    temp->next = top;
    top = temp;
    return;
}

void Stack::pop(){
    if(top == NULL){
        cout<<"The stack is empty."<<endl;
        return;
    }
    Node* temp = top;
    top = top->next;
    delete(temp);
    return;
}

void Stack::Top(){
    if(top == NULL){
        cout<<"The stack is empty."<<endl;
        return;
    }
    cout<<top->data<<endl;
    return;
}

void Stack::isEmpty(){
    if(top == NULL){
        cout<<"The stack is empty."<<endl;
        return;
    }
    cout<<"The stack is not empty."<<endl;
    return;
}

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.Top();
    s.pop();
    s.isEmpty();
    s.Top();
}