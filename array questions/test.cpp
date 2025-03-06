#include <bits/stdc++.h>
using namespace std;

void mergeArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    // Two pointers for arr1 and arr2
    int i = m - 1; // Pointer to the last element in the valid part of arr1
    int j = n - 1; // Pointer to the last element of arr2
    int k = m + n - 1; // Pointer to the last element in arr1 after resizing

    // Merge arr2 into arr1 starting from the end
    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            arr1[k--] = arr1[i--];
        } else {
            arr1[k--] = arr2[j--];
        }
    }

    // If there are remaining elements in arr2
    while (j >= 0) {
        arr1[k--] = arr2[j--];
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int m, n;
        cin >> m >> n;
        
        vector<int> arr1(m + n);  // arr1 is of size m + n
        vector<int> arr2(n);

        // Input the elements of arr1 and arr2
        for (int i = 0; i < m; ++i) {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> arr2[i];
        }

        // Merge arr2 into arr1
        mergeArrays(arr1, arr2, m, n);

        // Output the merged array
        for (int i = 0; i < m + n; ++i) {
            cout << arr1[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
