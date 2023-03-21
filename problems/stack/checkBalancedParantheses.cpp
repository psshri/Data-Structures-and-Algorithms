// check if a given string has a balanced parantheses or not

#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        char data;
        node* next;
        node(){
            data = '1';
            next = NULL;
        }
        node(char c){
            this->data = c;
            this->next = NULL;
        }
};

class stack1{
    private:
        node* head = NULL;
    public:
        bool isEmpty();
        char top();
        void pop();
        void push(char c);
};

void stack1::push(char c){
    node* temp = new node(c);
    if(head == NULL){
        head = temp;
        return;
    }
    temp->next = head;
    head = temp;
    return;
}

bool stack1::isEmpty(){
    if(head == NULL){
        return true;
    }
    else return false;
}

char stack1::top(){
    return head->data;
}

void stack1::pop(){
    node* temp = head;
    head = head->next;
    delete(temp);
    return;
}

bool isOppoNature(char c, char c1){
    if(c1 == '(' && c == ')' || c1 == '{' && c == '}' || c1 == '[' && c == ']'){
        return true;
    }
    else return false;
}

bool isBalanced(string s){
    stack1 st;
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(!st.isEmpty()){
            char c1 = st.top();
            if(isOppoNature(c, c1)){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        else{
            st.push(c);
        }
    }
    if(st.isEmpty()){
        return true;
    }
    else return false;
}

int main(){
    int n;
    cout<<"How many strings you want to test?"<<endl;
    cin>>n;
    
    for(int i=0; i<n; i++){
        string s;
        cout<<"Enter the string: "<<endl;
        cin>>s;
        if(isBalanced(s)){
            cout<<"The string has balanced parantheses."<<endl;
        }
        else{
            cout<<"The string does not have balanced parantheses."<<endl;
        }
    }
}