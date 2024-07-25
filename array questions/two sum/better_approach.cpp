#include<iostream>
#include<map>
#include<vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> mpp;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        int num = nums[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end()) {
            return {mpp[moreNeeded], i};
        }
        mpp[num] = i;
    }
    return {-1, -1};
}

int main() {
    vector<int> nums = {2, 6, 5, 8, 11};
    int target = 14;

    vector<int> result = twoSum(nums, target);

    if (result[0] != -1) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
