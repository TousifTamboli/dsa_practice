#include <iostream>
#include <cmath>

using namespace std;

void findTwoMissingNumbers(int arr[], int n) {
    long long totalSum = n * (n + 1LL) / 2; // Sum of first n natural numbers
    long long totalProduct = 1;
    for (int i = 1; i <= n; i++) {
        totalProduct *= i; // Product of first n natural numbers
    }

    long long sumArr = 0;
    long long productArr = 1;
    for (int i = 0; i < n - 2; i++) {
        sumArr += arr[i];
        productArr *= arr[i];
    }

    long long sumMissing = totalSum - sumArr; // Sum of the two missing numbers
    long long productMissing = totalProduct / productArr; // Product of the two missing numbers

    // Using the sum and product of the missing numbers to find the numbers
    long long discriminant = sumMissing * sumMissing - 4 * productMissing;
    
    if (discriminant < 0) {
        cout << "No solution exists!" << endl;
        return;
    }

    long long sqrtDiscriminant = sqrt(discriminant);
    if (sqrtDiscriminant * sqrtDiscriminant != discriminant) {
        cout << "Discriminant is not a perfect square!" << endl;
        return;
    }

    int missing1 = (sumMissing + sqrtDiscriminant) / 2;
    int missing2 = (sumMissing - sqrtDiscriminant) / 2;

    cout << "Missing numbers are: " << missing1 << " and " << missing2 << endl;
}

int main() {
    int arr[] = {1, 3, 2, 4, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]) + 2; // since two numbers are missing, the actual count is n + 2

    findTwoMissingNumbers(arr, n);

    return 0;
}
