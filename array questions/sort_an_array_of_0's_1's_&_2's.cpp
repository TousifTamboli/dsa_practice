#include<iostream>
#include<vector>

using namespace std;

void sortColors(vector<int>& nums) {
    int i = 0;           
    int j = 0;           
    int k = nums.size() - 1;  

    while (j <= k) {     
        if (nums[j] == 0) {
            swap(nums[i], nums[j]);
            i++;
            j++;
        }
        else if (nums[j] == 2) {
            swap(nums[j], nums[k]);
            k--;
        }
        else {
            j++;
        }
    }
}

int main() {
    vector<int> nums = {0, 1, 2, 2, 1, 0};

    sortColors(nums);

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " "; 
    }

    return 0;
}
