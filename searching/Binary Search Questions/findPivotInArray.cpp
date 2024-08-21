#include<iostream>
#include<vector>

using namespace std;

int pivotIndex(vector<int> &nums)
{
    int s = 0;
    int e = nums.size() - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (nums[e] <= nums[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main(){
    vector<int> nums = {3, 8, 10, 17, 1};
    // vector<int> nums = {1,7,3,6,5,6};

    int ans = pivotIndex(nums);

    cout<<"Pivot indec is : "<<ans<<endl;
}