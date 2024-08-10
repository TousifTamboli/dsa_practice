#include<iostream>
#include<map>
#include<vector>

using namespace std;

int MajorityElement(vector<int>& nums){
    map<int, int> mpp;

        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
            if (mpp[nums[i]] > nums.size() / 2) {
                return nums[i];
            }
        }

        return -1;

}

int main(){
    vector<int> nums = {2,2,1,1,1,2,2};
    int ans = MajorityElement(nums);
    cout << "The majority element is: " << ans << endl;
    return 0;
}