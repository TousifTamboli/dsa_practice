// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {1, 2, 3, 4, 5};
    
    int n = sizeof(arr) / sizeof(arr[0]); //number of elements
    int temp = arr[0];
    
    cout<<"Number of Elements: "<<n<<endl;
    cout<<"First number assigned to temp : "<<temp<<endl;
    
    for (int i = 1; i < n; i++)
    {
        // cout<<arr[i]<<" ";
        arr[i-1] = arr[i];
    }
    // cout<<endl;
    arr[n-1] = temp;
    
    cout<<"Reversed array : ";
    for(int i = 0; i < n; i++){
        
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}

