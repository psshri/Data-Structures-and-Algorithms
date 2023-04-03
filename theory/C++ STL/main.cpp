#include<iostream>
#include<array>
#include<vector>
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

    cout<<"begin and end: "<<endl;
    for(vector<int>::iterator i=vector1.begin(); i!=vector1.end(); ++i){
        cout<<*i<<" ";
    }
    cout<<endl;

}

// 16:07
// vector.begin not working, check it later