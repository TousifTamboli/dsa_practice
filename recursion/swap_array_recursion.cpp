#include <iostream>
#include <vector>
using namespace std;

void reverseArray(int fIndex, int lIndex, vector<int>& arr) {
    if (fIndex >= lIndex) return;

    swap(arr[fIndex], arr[lIndex]);
    reverseArray(fIndex + 1, lIndex - 1, arr);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    int fIndex = 0;
    int lIndex = n - 1;

    reverseArray(fIndex, lIndex, arr);

    // Print the reversed array
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
