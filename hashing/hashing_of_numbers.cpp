#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: " << endl;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Precompute
    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    // Query input
    int q;
    cout << "Enter number of queries: " << endl;
    cin >> q;
    while (q--) {
        int number;
        cout << "Enter number to query: ";
        cin >> number;
        // Output the count of the queried number
        cout << "Count of " << number << " is " << hash[number] << endl;
    }

    return 0;
}
