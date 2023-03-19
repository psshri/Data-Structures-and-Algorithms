#include<iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for(int i=0; i<=n-2; i++) {
        int min=i;
        for(int j=i+1; j<n; j++) {
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        int val = arr[i];
        arr[i] = arr[min];
        arr[min] = val;
    }
}

int main() {
    // int arr[6] = {2,7,4,1,5,3};
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<n; i++) {
        cout<<"Enter the "<<i+1<<" element: ";
        cin>>arr[i];
    }

    cout<<"Size of array : "<<sizeof(arr)<<endl;

    selectionSort(arr, n);

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}