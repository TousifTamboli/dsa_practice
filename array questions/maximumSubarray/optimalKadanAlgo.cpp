#include <bits/stdc++.h>

using namespace std;

int maximumSubarray(vector<int> &arr)
{

    int maxSoFar = arr[0];
    int maxEndingHere = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        maxEndingHere = max(arr[i], maxEndingHere + arr[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }

    return maxSoFar;
}

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxSum = maximumSubarray(arr);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}