#include <iostream>
using namespace std;

void insertionSort(int arr[],int size){
    // int temp = 0;
    for(int i = 1;i<size;i++)
    {
        for(int j = i; j>=0;  j--)
        {
            if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);
            else
            break;
        }
    }
}

void printArray(int arr[], int size)
 {
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
 }
