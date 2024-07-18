#include<iostream>
using namespace std;

int main() {
    int n = 5; 
    int width = 2 * n - 1; // Total width of the diamond

    // Upper part of the diamond including the middle row
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < width; j++) {
            if (j >= n - 1 - i && j <= n - 1 + i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    // Lower part of the diamond
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < width; j++) {
            if (j >= n - 1 - i && j <= n - 1 + i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
