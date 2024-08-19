class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int leftAns = -1;
        int s = 0;
        int e = nums.size()-1;
        int mid = s + (e-s) / 2;
        while(s<=e){
            if(nums[mid] == target){
                leftAns = mid;
                e = mid - 1;
            }
            else if(nums[mid] < target){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            mid = s + (e-s) / 2;
        }

        
        int rightAns = -1;
        s = 0;
        e = nums.size()-1;
        mid = s + (e-s) / 2;
        while(s<=e){
            if(nums[mid] == target){
                rightAns = mid;
                s = mid + 1;
            }
            else if(nums[mid] < target){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            mid = s + (e-s) / 2;
        }
        return vector<int>{leftAns, rightAns};

    }
};