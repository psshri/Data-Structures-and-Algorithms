// C++ program to evaluate prefix using stack

#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        string data;
        node* next;
        node(){
            data = 'a';
            next = NULL;
        }
        node(string a){
            this->data = a;
            this->next = NULL;
        }
};

class stack1{
    private:
        node* head;
    public:
        bool isEmpty();
        void push(string c);
        string top();
        void pop();
};

void stack1::pop(){
    node* temp = head;
    head = head->next;
    delete(temp);
}

string stack1::top(){
    string c = head->data;
    return c;
}

bool stack1::isEmpty(){
    if(head == NULL){
        return true;
    }
    else return false;
}

void stack1::push(string c){
    node* temp = new node(c);
    temp->next = head;
    head = temp;
}

bool isOperand(string c){
    if(c == "+" || c == "-" || c == "*" || c == "/"){
        return false;
    }
    else return true;
}

int evaluate(string c1, string c2, string c3){
    int a1 = stoi(c1);
    int a3 = stoi(c3);
    int val;
    if(c2 == "+"){
        val = a1 + a3;
    }
    else if(c2 == "-"){
        val = a1 - a3;
    }
    else if(c2 == "*"){
        val = a1 * a3;
    }
    else if(c2 == "/"){
        val = a1 / a3;
    }
    return val;
}

int prefix(string s){
    int val = 0;
    stack1 st;
    for(int i=0; i<s.length(); i++){
        char c4 = s[i];
        string c3(1, c4);
        // cout<<c3<<endl;
        // string c3 = "";
        // c3 += c4;
        if(st.isEmpty()){
            st.push(c3);
        }
        else{
            string c1 = st.top();
            while(isOperand(c1) && isOperand(c3)){
                // cout<<"c1: "<<c1<<" and c3: "<<c3<<endl;
                st.pop();
                string c2 = st.top();
                st.pop();
                val = evaluate(c1, c2, c3);
                string t = to_string(val);
                c3 = t;
                if(st.isEmpty()){
                    return val;
                }
                c1 = st.top();
            }
            st.push(c3);
        }
    }
    return val;
}

int main(){
    string s;
    cout<<"Enter a prefix expression: "<<endl;
    cin>>s;
    int val = prefix(s);
    cout<<"Value of "<<s<<" is "<<val<<endl;
}