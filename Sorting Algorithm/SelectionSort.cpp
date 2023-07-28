/* SELECTION SORT :- is a simple sorting algorithm that repeatedly finds the minimum elements from the unsorted
 part of the array and place it at the ubsorted part of array and place s it at the begining. It gradually builds
  the sorted partion of the array from left to right,
*/

#include<iostream>
using namespace std;

// Function to swap two number by call by reference
void swap(int& a, int& b){
  int temp = a;
  a = b;
  b = temp;
}

void selectionSort(int arr[], int size){
  for(int i=0;i<size-1;i++){
    // Assume the current element is the minimum
    int min_idx = i;
    // Find the minimum element in the unsorted part of the array
    for(int j = i+1;j<size;j++){
      if(arr[j]<arr[min_idx]){
        min_idx = j;
      }
    }
    // Swap the minimum element with the first unsorted element
    swap(arr[i], arr[min_idx]);
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
  selectionSort(arr, size);
  cout<<"Sorted array: ";
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;

}