#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;    // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1; // starting index of right half of arr

    // storing elements in the temproray array in sorted manner

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements are still remaining
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return; // base condition
    int mid = (low + high) / 2;
    cout<<mid;
    mergeSort(arr, low, mid);      // left half
    mergeSort(arr, mid + 1, high); // right half
    merge(arr, low, mid, high);    // merge sorted halves
}

int main()
{
    vector<int> arr = {4, 6, 9, 1, 2, 3, 8};
    int n = 7;

    cout << "Before Sorting Array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    mergeSort(arr, 0, n - 1);
    cout << "After Sorting Array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}