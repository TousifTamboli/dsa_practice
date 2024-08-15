#include <bits/stdc++.h>

using namespace std;

int maximunSubarray(vector<int> &arr)
{
    int maxi = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i; j < arr.size(); j++)
        {
            int sum = 0;

            for (int k = i; k <= j; k++)
            {

                sum += arr[k];
            }

            maxi = max(maxi, sum);
        }
    }

    return maxi;
}

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxSum = maximunSubarray(arr);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}