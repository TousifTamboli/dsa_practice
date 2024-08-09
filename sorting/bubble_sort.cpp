#include<iostream>
#include<vector>

using namespace std;

void bubble_sort(vector<int>& nums){
    for (int i = nums.size()-1; i > 0; i--)
    {
        int didSwap = 0;
        for (int j = 0; j < i; j++)
        {
            if (nums[j] > nums[j+1])
            {
                int temp = nums[j+1];
                nums[j+1] = nums[j];
                nums[j] = temp;
                didSwap = 1;
            }
            
        }
        if (didSwap == 0)
        {
            break;
        }
        cout<<"runs\n";
        
    }
    
}

int main(){
    // int n;
    // cout<<"Enter number of elements in numsay : ";
    // cin>>n;
    vector<int> nums = {2,0,2,1,1,0};

    bubble_sort(nums);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " "; 
    }

    return 0;
    
}