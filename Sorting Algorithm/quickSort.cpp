/*
    quick sort :-   is another popular divide and conquer sorting algorithm that works by selecting a "pivot" 
    element from the array and partitioning the other element into two sub - array based on whether they are 
    less or greater than the pivot. It then recursively sorts the sub - arrray.
*/

#include<iostream>
using namespace std;

// Function to swap two element
void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

// Function to partition the array and return the index of pivot 
int Partition(int arr[], int low, int high){
    int pivot = arr[high];
    // right most element as the pivot

    int i = low-1;
    // Index of smaller element

    for(int j=low; j<high; j++){
        if(arr[j]<= pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    // place the pivot in the correct position
    return i+1;
}

// Quick Sort function
void quickSort(int arr[], int low, int high){
    if(low < high){
        int pivotIndex = Partition(arr, low, high);
        // sort element before the pivot
        quickSort(arr, low, pivotIndex-1);

        // sort element after the pivot
        quickSort(arr, pivotIndex+1, high);

    }
}

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the element of array: ";
    int arr[size];
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    quickSort(arr, 0, size-1);
    cout<<"Sorted array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}