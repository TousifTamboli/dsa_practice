#include<iostream>

using namespace std;

int main(){
    int k = 3;
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int target[k];
    int i;
    int j;

    int n = sizeof(nums)/sizeof(nums[0]);

    for (i = n-k; i < n; i++)
    {
        target[i-(n-k)] = nums[i];
    }

    for (i = n-k-1; i >= 0; i--)
    {
        nums[i + k] = nums[i];
    }

    for (i = 0; i < k; i++)
    {
        nums[i] = target[i];

    }
    
    for (i = 0; i < n; i++)
    {
        cout<<nums[i]<<" ";

    }cout<<endl;
    
    
}


// leetcode solution
// #include <vector>

// using namespace std;

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         k = k % n; 
//         vector<int> target(k);
        

//         for (int i = n - k; i < n; i++) {
//             target[i - (n - k)] = nums[i];
//         }

//         for (int i = n - k - 1; i >= 0; i--) {
//             nums[i + k] = nums[i];
//         }

//         for (int i = 0; i < k; i++) {
//             nums[i] = target[i];
//         }
//     }
// };
