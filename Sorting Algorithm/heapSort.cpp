/* 
HEAP SORT :- is a comparison - based sorting algorithm that uses a binary heap data structure to sort element
in ascending or descending order. It first builds a max-heap (for ascending order) or min-heap  (for descending order)
 from the input array and then repeatedly extracting the root element (the  maximum or minimum element) to form the sorted array:
*/

#include<iostream>
using namespace std;

// Function to heapify a subtree rooted at index i in the array
void heapify(int arr[], int size, int i){
    int largest = i; // initialize largest as the root
    int left = 2*i+1; // left child
    int right = 2*i+2; // right child

    // if the left child is larger than the root
    if(left<size && arr[left]>arr[largest]){
        largest = left;
    }
    // if right child is larger than the root
    if(right<size && arr[right]>arr[largest]){
        largest = right;
    }

    // If the largest element is not the root
    if(largest != i){
        swap(arr[i],arr[largest]);
        // recursively heapify the affected subtree
        heapify(arr, size, largest);
    }
}

void heapSort(int arr[], int size){
    // Build the max-heap from the input array
    for(int i= size/2-1;i>=0;i--){
        heapify(arr,size,i);
    }

    // Extracting elements one by one from the heap
    for(int i=size-1;i>0;i--){
        swap(arr[0],arr[i]);//move current root to the end
        heapify(arr, i , 0); // Reduce the heap size and heapify the root
    }
}

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the element's of array: ";
    for(int i=0;i<size;i++){
        cin>> arr[i];
    }
    heapSort(arr,size);
    cout<<"Sorted array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}