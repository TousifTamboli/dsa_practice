#include <iostream>
#include <vector>
#include<numeric>

using namespace std;

int pivotIndex(vector<int> &nums)
{
    int total = accumulate(nums.begin(), nums.end(), 0);
    int leftTotal = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        int rightTotal = total - leftTotal - nums[i];
        if (leftTotal == rightTotal)
        {
            return i;
        }
        else
        {
            leftTotal += nums[i];
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1,7,3,6,5,6};

    int ans = pivotIndex(nums);

    cout<<"Pivot index is : "<<ans<<endl
}