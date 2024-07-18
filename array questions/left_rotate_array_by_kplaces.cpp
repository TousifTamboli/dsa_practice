// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{

    int i;
    int k = 3;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int target[k];

    int n = sizeof(arr) / sizeof(arr[0]);

    //   cout<<n;

    k = k % n; // for k number grater than the size of array

    for (i = 0; i < k; i++)
    {
        target[i] = arr[i];
    }

    for (i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }

    for (i = n - k; i < n; i++)
    {
        arr[i] = target[i - (n - k)];
    }

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}