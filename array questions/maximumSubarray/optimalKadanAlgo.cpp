#include <bits/stdc++.h>

using namespace std;

long long maximumSubarray(vector<int> &nums)
{
    long long maxi = LONG_MIN;
    long long sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        if (sum > maxi)        {
            maxi = sum;
        }

        if (sum < 0){
            sum = 0;
        }
        // sum of Empty array if mentioned
        //  if(maxi < 0) maxi = 0;
    } return maxi;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    long long maxSum = maximumSubarray(nums);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}