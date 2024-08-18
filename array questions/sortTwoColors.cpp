#include<iostream>
#include<vector>

using namespace std;

vector<int> sortArray(vector<int> &nums) {
    int i = 0;
    int j = nums.size() - 1;

    while (i < j) {

        while (i < j && nums[i] == 0) {
            i++;
        }

        while (i < j && nums[j] == 1) {
            j--;
        }

        if (i < j) {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
    return nums;
}


int main(){
    vector<int> nums = {1, 0, 1, 1, 0, 1, 0, 1};

    sortArray(nums);

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " "; 
    }

    return 0;
}