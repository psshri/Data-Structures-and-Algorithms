// C++ program to convert infix to postfix

#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        char data;
        node* next;
        node(){
            data = 't';
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
        bool isEmpty();
        char top();
        void pop();
};

void stack1::pop(){
    node* temp = head;
    head = head->next;
    delete(temp);
    return;
}

char stack1::top(){
    return head->data;
}

bool stack1::isEmpty(){
    if(head == NULL){
        return true;
    }
    else return false;
}

void stack1::push(char c){
    node* temp = new node(c);
    temp->next = head;
    head = temp;
    return;
}

bool isLight(char c1, char c2){
    if(c1 == '+' || c1 == '-'){
        if(c2 == '*' || c2 == '/'){
            return true;
        }
        else return false;
    }
    else return false;
}

bool isOperator(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/'){
        return true;
    }
    else return false;
}

string evaluate(string infix){
    string postfix = "";
    stack1 st;

    for(int i=0; i<infix.length(); i++){
        char c1 = infix[i];
        if(isOperator(c1)){
            if(st.isEmpty()){
                st.push(c1);
            }
            else{
                // char c2 = st.top();
                while(isLight(c1, st.top())){
                    char c2 = st.top();
                    st.pop();
                    postfix += c2;
                    if(st.isEmpty()){
                        break;
                    }
                }
                st.push(c1);
            }
        }
        else{
            postfix += c1;
        }
    }
    while(!st.isEmpty()){
        char c3 = st.top();
        st.pop();
        postfix += c3;
    }
    return postfix;
}

int main(){
    string infix = "5+3*8+6/3";
    string postfix = evaluate(infix);
    cout<<"Postfix expression of "<<infix<<" is: "<<postfix<<endl;
}