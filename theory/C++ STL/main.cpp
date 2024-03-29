//#include<bits/stdc++.h>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<array>
#include<vector>
#include<deque>
using namespace std;

int main(){
    
    // Array //////////////////////////////////////////////////////////////////////////////////////
    cout<<"Array **********************************************************************************"<<endl<<endl;

    array<int, 4> array1 = {1,2,3,4};
    int sizeArray = array1.size();
    for(int i=0; i<sizeArray; i++){
        cout<<array1[i]<<" ";
    }

    cout<<endl;
    cout<<"Element at 3rd position: "<<array1.at(2)<<endl;
    cout<<"Empty or not: "<<array1.empty()<<endl;
    cout<<"First element: "<<array1.front()<<endl;
    cout<<"Last element: "<<array1.back()<<endl;

    // Vector /////////////////////////////////////////////////////////////////////////////////////
    cout<<endl<<"Vector *********************************************************************************"<<endl<<endl;

    vector<int> vector2(5, 1);
    cout<<"Print vector2: "<<endl;
    for(int i:vector2){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> vector3(vector2);
    cout<<"Print vector3: "<<endl;
    for(int i:vector3){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> vector1;
    cout<<"Capacity of vector1: "<<vector1.capacity()<<" Size of vector1: "<<vector1.size()<<endl;
    
    vector1.push_back(1);
    cout<<"Capacity of vector1: "<<vector1.capacity()<<" Size of vector1: "<<vector1.size()<<endl;
    
    vector1.push_back(2);
    cout<<"Capacity of vector1: "<<vector1.capacity()<<" Size of vector1: "<<vector1.size()<<endl;
    
    vector1.push_back(3);
    cout<<"Capacity of vector1: "<<vector1.capacity()<<" Size of vector1: "<<vector1.size()<<endl;
    
    vector1.push_back(4);
    cout<<"Capacity of vector1: "<<vector1.capacity()<<" Size of vector1: "<<vector1.size()<<endl;
    
    vector1.push_back(5);
    cout<<"Capacity of vector1: "<<vector1.capacity()<<" Size of vector1: "<<vector1.size()<<endl;

    cout<<"Element at 2nd position: "<<vector1.at(1)<<endl;
    cout<<"Front element: "<<vector1.front()<<endl;
    cout<<"Back element: "<<vector1.back()<<endl;

    cout<<"Vector before pop"<<endl;
    for(int i:vector1){
        cout<<i<<" ";
    }
    cout<<endl;

    vector1.pop_back();

    cout<<"Vector after pop"<<endl;
    for(int i:vector1){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size before clear: "<<vector1.size()<<endl;
    cout<<"Capacity before clear: "<<vector1.capacity()<<endl;
    vector1.clear();
    cout<<"Size after clear: "<<vector1.size()<<endl;
    cout<<"Capacity after clear: "<<vector1.capacity()<<endl;

    // doubt
    // cout<<"begin and end: "<<endl;
    // for(vector<int>::iterator it=vector1.begin(); it!=vector1.end(); ++it){
    //     cout<<"hI"<<endl;
    //     cout<<*it<<" ";
    // }
    // cout<<endl;

    vector<int>::iterator it = vector1.begin();
    ++it;
    // cout<<"it: "<<it<<endl;
    cout<<"*it: "<<*it<<endl;


    // Deque /////////////////////////////////////////////////////////////////////////////////////
    cout<<endl<<"Deque *********************************************************************************"<<endl<<endl;

    deque<int> d;
    
    d.push_back(2);
    d.push_front(1);

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.pop_back();
    // d.pop_back();
    d.pop_front();

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.push_back(10);
    d.push_back(20);
    d.push_back(30);

    cout<<"Element at second position: "<<d.at(1)<<endl;

    cout<<"Front element is: "<<d.front()<<endl;
    cout<<"Back element is: "<<d.back()<<endl;

    cout<<"Empty or not: "<<d.empty()<<endl;

    cout<<"Deque is: "<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size of deque before erase operation: "<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"Size of deque after erase operation: "<<d.size()<<endl;

    // List /////////////////////////////////////////////////////////////////////////////////////
    cout<<endl<<"List *********************************************************************************"<<endl<<endl;

    list<int> l;
    
    l.push_back(1);
    l.push_front(2);
    l.push_back(3);
    l.push_back(4);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size of list: "<<l.size()<<endl;

    list<int> n(l);

    cout<<"n is: "<<endl;
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;

    list<int> l2(4, 100);
    cout<<"list l2: "<<endl;
    for(int i:l2){
        cout<<i<<" ";
    }
    cout<<endl;

    // Stack /////////////////////////////////////////////////////////////////////////////////////
    cout<<endl<<"Stack *********************************************************************************"<<endl<<endl;

    stack<string> s;

    s.push("pss");
    s.push("priyanshu");
    s.push("shekhar");
    s.push("shrivastava");
    s.push("psshri");

    cout<<"Top element is :"<<s.top()<<endl;
    s.pop();
    cout<<"Poping the top element: "<<endl;
    cout<<"Now the top element is: "<<s.top()<<endl;
    cout<<"Size of stack is: "<<s.size()<<endl;
    cout<<"Stack empty or not: "<<s.empty()<<endl;
    cout<<endl;

    // Queue /////////////////////////////////////////////////////////////////////////////////////
    cout<<endl<<"Queue *********************************************************************************"<<endl<<endl;

    queue<string> q;

    q.push("pss");
    q.push("priyanshu");
    q.push("shekhar");
    q.push("shrivastava");

    cout<<"First element: "<<q.front()<<endl;
    q.pop();
    cout<<"First element: "<<q.front()<<endl;
    cout<<"Size: "<<q.size()<<endl;

    // Priority Queue /////////////////////////////////////////////////////////////////////////////////////
    cout<<endl<<"Priority Queue *********************************************************************************"<<endl<<endl;

    // max heap
    priority_queue<int> maxi;

    // min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(0);

    int n1 = maxi.size();
    for(int i=0; i<n1; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(10);
    mini.push(3);
    mini.push(4);
    mini.push(2);

    int n2 = mini.size();
    for(int i=0; i<n2; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

    cout<<"Priority queue empty? "<<maxi.empty()<<endl;

    // Set ////////////////////////////////////////////////////////////////////////////////////////
    cout<<endl<<"Set *********************************************************************************"<<endl<<endl;    

    set<int> set1;
    set1.insert(4);
    set1.insert(3);
    set1.insert(1);
    set1.insert(4);

    for(auto i:set1){
        cout<<i<<endl;
    }
    cout<<endl;

    set<int>::iterator it_set = set1.begin();
    it_set++;

    set1.erase(it_set);

    for(auto i:set1){
        cout<<i<<endl;
    }

    // tells whether an element is present or not
    cout<<"4 is present or not? "<<set1.count(4)<<endl;

    // find gives you the iterator to an element
    set<int>::iterator it_set2 = set1.find(4);
    cout<<"value present at it_set2 is: "<<*it_set2<<endl;

    // Map ////////////////////////////////////////////////////////////////////////////////////////
    cout<<endl<<"Map *********************************************************************************"<<endl<<endl;

    map<int, string> map1;

    map1[1] = "abc";
    map1[2] = "zxc";
    map1.insert({3, "qwe"});

    for(auto i:map1){
        cout<<i.first<<" "<<i.second<<endl;
    }

    // count: tells whether an element is present or not
    cout<<"Is 3 present? "<<map1.count(3)<<endl;
    // cout<<"Is qew present? "<<map1.count("qwe")<<endl;


    map1.erase(3);

    for(auto i:map1){
        cout<<i.first<<" "<<i.second<<endl;
    }

    // find: tells you the iterator to the element
    map<int, string>::iterator it_map = map1.find(1);

    cout<<"value at it_map: "<<it_map->first<<" "<<it_map->second<<endl;

    // Algorithms ////////////////////////////////////////////////////////////////////////////////////////
    cout<<endl<<"Algorithms *********************************************************************************"<<endl<<endl;

    vector<int> v2;

    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(10);
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);

    cout<<"searching for 6 in v2: "<<binary_search(v2.begin(), v2.end(), 6)<<endl;
    cout<<"searching for 0 in v2: "<<binary_search(v2.begin(), v2.end(), 0)<<endl;

    cout<<"lower_bound of 3 in v2: "<<lower_bound(v2.begin(), v2.end(), 3)-v2.begin()<<endl;
    cout<<"lower_bound of 5 in v2: "<<lower_bound(v2.begin(), v2.end(), 5)-v2.begin()<<endl;    
    cout<<"upper_bound of 5 in v2: "<<upper_bound(v2.begin(), v2.end(), 5)-v2.begin()<<endl;

    int a = 1;
    int b = 2;

    cout<<"min: "<<min(a, b)<<endl;
    cout<<"max: "<<max(a, b)<<endl;
    swap(a, b);
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;

    string a2 = "abcd";
    cout<<"string: "<<a2<<endl;
    reverse(a2.begin(), a2.end());
    cout<<"string after reverse: "<<a2<<endl;

    for(int i:v2){
        cout<<i<<" ";
    }
    cout<<endl;
    rotate(v2.begin(), v2.begin()+2, v2.end());
    cout<<"Vector after rotate: "<<endl;
    for(int i:v2){
        cout<<i<<" ";
    }
    cout<<endl;

    sort(v2.begin(), v2.end());
    cout<<"v2 after sorting: "<<endl;
    for(int i:v2){
        cout<<i<<" ";
    }
    cout<<endl;
}

// 38:21
// vector.begin not working, check it later