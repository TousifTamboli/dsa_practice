#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int> &nums)
{

    if (nums.empty())
    {
        return 0;
    }

    int i;
    int j = 0;

    for (i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[j])
        {
            j++;
            nums[j] = nums[i];
        }
    }
    return j + 1;
}

int main()
{

    vector<int> nums = {1, 1, 2};

    int k = removeDuplicates(nums);

    for (int i = 0; i <= k; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}