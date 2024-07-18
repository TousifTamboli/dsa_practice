#include<iostream>
#include<algorithm>

using namespace std;

void reverseArray(int Arr[], int len){
    for (int i = 0; i < len/2; i++)
    {
        swap(Arr[i], Arr[len-i-1]);
    }
    
}

void printArray(int Arr[], int len){
    for (int i = 0; i < len; i++)
    {
        cout<< Arr[i] << " ";
    }
    cout<< endl;
    
}

int main(){
    int Arr[] = {1, 2, 3, 4, 5, 6, 7};
    int len = sizeof(Arr) / sizeof(Arr[0]);

    cout<< "Original Array: ";
    printArray(Arr, len);

    reverseArray(Arr, len);

    cout<< "Reversed Array: ";
    printArray(Arr, len);

    cout<<len;

}