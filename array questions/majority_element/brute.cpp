#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> nums) {
    int count = 0;
    int candidate = 0;

    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }

    return candidate;
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(nums);
    cout << "The majority element is: " << ans << endl;
    return 0;
}


