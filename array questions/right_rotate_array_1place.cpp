// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    
    int n = sizeof(arr) / sizeof(arr[0]); //number of elements
    int temp = arr[n-1];
    
    // cout<<arr[4]<<endl;
    
    cout<<"Number of Elements: "<<n<<endl;
    cout<<"Last number assigned to temp : "<<temp<<endl;
    
    for (int i = n-1; i > 0; i--)
    {
       arr[i] = arr[i-1];
    }
    // cout<<endl;
    arr[0] = temp;
    
    cout<<"Reversed array : ";
    for(int i = 0; i < n; i++){
        
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}

