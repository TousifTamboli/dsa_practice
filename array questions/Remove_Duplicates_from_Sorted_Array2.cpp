#include<iostream>
#include<vector>

using namespace std;

int advRemoveDupplicates(vector<int>& nums){
    int i;
    int target = 1;

    for (i = 1; i < nums.size(); i++)
    {
        if (target == 1 || nums[i] != nums[target - 2])
        {
            nums[target++] = nums[i];
        }
        
    }
    return target;
    


}


int main(){

    vector<int> nums = {1,1,1,2,2,3};

    int k = advRemoveDupplicates(nums);

    for (int i = 0; i < k; i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}