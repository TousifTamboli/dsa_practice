#include <iostream>
#include <vector>
using namespace std;

int findUnique(const vector <int>& nums) {

    int i;
    
     for (int i = 1; i < nums.size() - 1; ++i) {
        // Check if the current element is not equal to its predecessor and successor
        if (nums[i] != nums[i-1] && nums[i] != nums[i+1]) {
            return nums[i];
        }
    }
    
    // Check the first and last elements separately
    if (nums[0] != nums[1]) {
        return nums[0];
    }
    if (nums[nums.size() - 1] != nums[nums.size() - 2]) {
        return nums[nums.size() - 1];
    }
    
    // Return -1 if no unique element is found (though the problem guarantees there is one)
    return -1;
        
    
}

int main(){
   vector<int> nums = {1, 1, 2, 3, 3, 4, 4};
   int uniqeElement = findUnique(nums);

   cout<<"Unique element is: "<<uniqeElement;

   return 0;
}
