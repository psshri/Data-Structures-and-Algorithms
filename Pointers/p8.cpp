// arrays as function arguments: video 7/17

#include<iostream>
using namespace std;

int sum(int arr[], int n) {
    int ans = 0;
    for(int i=0; i<n; i++) {
        ans += arr[i];
    }
    return ans;
}

void doubleit(int arr[], int size) {
    for(int i=0; i<size; i++) {
        arr[i] = 2*arr[i];
    }
}

int main() {
    int arr[4] = {1,2,3,4};
    int ans = sum(arr, 4);
    cout<<ans<<endl;
    cout<<"size of arr: "<<sizeof(arr)<<endl;
    cout<<"elements in arr: "<<sizeof(arr)/sizeof(arr[0])<<endl;

    doubleit(arr, 4);
    
    for(int i=0; i<4; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}