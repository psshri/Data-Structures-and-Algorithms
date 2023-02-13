#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool binarySearch(int arr[], int n, int x) {
    int start = 0;
    int end = n-1;

    while(start <= end) {
        int mid = (start+end)/2;
        if(arr[mid] == x) {
            return 1;
        }
        else if(arr[mid] < x) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return 0;
}

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: "<<endl;
    int arr[n];
    for(int i=0; i<n; i++) {
        cout<<"Enter the "<<i<<" element: ";
        cin>>arr[i];
    }
    cout<<endl;
    printArray(arr, n);
    int x;
    cout<<"Enter the value to be searched: ";
    cin>>x;
    bool ans = binarySearch(arr, n, x);
    if(ans==1) {
        cout<<x<<" exists in the array: "<<endl;
    }
    else {
        cout<<x<<" does not exists in the array"<<endl;
    }
}