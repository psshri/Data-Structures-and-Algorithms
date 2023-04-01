#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        char data;
        node* next = NULL;
        node(){
            data = '0';
            next = NULL;
        }
        node(char c){
            this->data = c;
            this->next = NULL;
        }
};

class stack1{
    private:
        node* head;
    public:
        void push(char c);
        char pop();
        bool isEmpty();
        void printStack();
};

void stack1::printStack(){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

bool stack1::isEmpty(){
    if(head == NULL){
        return true;
    }
    else return false;
}

char stack1::pop(){
    node* temp = head;
    head = head->next;
    char c = temp->data;
    delete(temp);
    return c;
}

void stack1::push(char c){
    node* temp = new node(c);
    temp->next = head;
    head = temp;
    return;
}

int main(){
    stack1 st;
    st.push('p');
    st.push('s');
    st.printStack();
    if(!st.isEmpty()){
        cout<<"The stack is not empty"<<endl;
    }
    char a = st.pop();
    cout<<a<<endl;
    st.printStack();
}