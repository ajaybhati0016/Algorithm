/*
INSERTION SORT :- is a simple sorting algorithms that builds the final sorted array one element at a time.
 It iterates through the input array, removes one element at a time, and insert it into its correct position 
 in the sorted part of the array.
 */

#include<iostream>
using namespace std;

void insertionSort(int arr[], int size){
    for(int i=1;i<size;i++){
        int key = arr[i];
        int j = i-1;
        // move element that are greater than the key to one position ahead of their current position
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        // Insert the key into its correct position
        arr[j+1] = key;
    }
}

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    insertionSort(arr, size);
    cout<<"Sorted array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}