// C++ program to convert infix to postfix

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

bool isOperand(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/'){
        return true;
    }
    else return false;
}

string evaluate(string infix){
    string postfix = "";
    stack1 st;
    int counter = 0;
    for(int i=0; i<infix.length(); i++){
        char c = infix[i];
        if(isOperand(c)){
            st.push(c);
            cout<<"pushed "<<c<<" into the stack"<<endl;
            st.printStack();
            counter = 0;
        }
        else{
            if(counter == 1){
                postfix += c;
                char c1 = st.pop();
                postfix += c1;
            }
            else{
                counter = 1;
                postfix += c;
            }
        }
    }
    // while(!st.isEmpty()){
    //     char c3 = st.pop();
    //     cout<<"hi"<<endl;
    //     postfix += c3;
    // }
    return postfix;
}

int main(){
    string infix;
    cout<<"Enter the infix expression: "<<endl;
    cin>>infix;

    string postfix = evaluate(infix);
    cout<<"Postfix expression of "<<infix<<" is: "<<postfix<<endl;
}