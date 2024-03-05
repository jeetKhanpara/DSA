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

void idealInsertionSort(int arr[],int size)
{
    for(int i = 1; i<size; i++)
    {
        int temp=arr[i];
        int j = i-1;
        for(j;j>=0 && temp < arr[j];j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1] = temp;
    }
}

void bubbleSort(int arr[],int size)
{
    for(int i = 0;i<size;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}

void selectionSort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[i])
            swap(arr[j],arr[i]);
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

int main()
{
    int arr[5] = {5,3,7,1,20};
    selectionSort(arr,5);
    printArray(arr,5);
    // idealInsertionSort(arr,5);
    // printArray(arr,5);
    // int num[5];
    // fill_n(num,5,21);
    // printArray(num,5);
    return 0;
}