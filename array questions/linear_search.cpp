#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int arr[] = {6,7,8,4,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;
    int target = 4;
    int index = -1;
    
    for(i = 0; i<n ; i++){
        if(arr[i] == target){
        index = i;
        break;
        }
    }
    
    if (index != -1)
    {
        cout<<"Target found at index : "<<index<<endl;
    }
    else{
        cout<<"Taget not found";
    }
    
    return 0;
    
}