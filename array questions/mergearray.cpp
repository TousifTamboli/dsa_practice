#include<iostream>

using namespace std;

void mergeSortedArrays(int arr1[], int arr2[], int n1, int n2, int arr3[]){
    int i= 0; int j = 0; int k = 0;

    while (i<n1 && j<n2)
    {
        if (arr1[i]<arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
        
    }

    while (i<n1)
    {
        arr3[k++] = arr1[i++];
    }
    while (j<n2)
    {
        arr3[k++] = arr2[j++];
    }
    
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int main() {

    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[n1 + n2];

    cout<<"original array 1 : "<<endl;
    printArray(arr1, n1);
    cout<<"original array 2 : "<<endl;
    printArray(arr2, n2);
    mergeSortedArrays(arr1, arr2, n1, n2, arr3);
    cout<<"merged and sorted array: ";
    printArray(arr3, n1 + n2);
}