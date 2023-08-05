/* BUBBLE SORT :- is a simple sorting algorithm that repeatedly steps through the list of elements to be
 sorted, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated
  until entire list is sorted.
*/
#include<iostream>
using namespace std;

// To swap the integer 'a' and 'b'
void swap(int& a, int& b){
    int temp = a;
    a = b;
    b= temp;
}

// To sort array using bubble sort algorithm
void BubbleSort(int arr[], int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
       
}

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the array "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    BubbleSort(arr, size);
    cout<<"Sorted array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}