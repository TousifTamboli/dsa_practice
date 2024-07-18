#include<iostream>
#include<vector>

using namespace std;

int removeElement(vector<int>& nums, int val){
    int i;
    int index = 0;

    for (i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            nums[index] = nums[i];
            index++;
        }
        
    } return index;
    
}



int main() {
    vector<int> nums = {3,2,2,3};
    int val = 3;

    int k = removeElement(nums, val);

    for (int i = 0; i < k; i++)
    {
        cout<< nums[i]<< " ";
    }cout<<endl;
    
    return 0;

    //Output: 2, nums = [2,2,_,_]

}