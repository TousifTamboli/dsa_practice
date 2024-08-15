#include <bits/stdc++.h>

using namespace std;

int maximunSubarray(vector<int> &nums)
{
    int maxi = INT_MIN;

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i; j < nums.size(); j++)
        {
            int sum = 0;

            for (int k = i; k <= j; k++)
            {

                sum += nums[k];
            }

            maxi = max(maxi, sum);
        }
    }

    return maxi;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxSum = maximunSubarray(nums);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}