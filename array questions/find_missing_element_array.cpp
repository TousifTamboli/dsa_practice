#include <iostream>
#include<vector>
using namespace std;


int main() {
    
    vector <int> nums = {1, 2, 4, 5};
    int i;
    int miss;

    // int n = sizeof(nums)/sizeof(nums[1]);

    for (i = 0; i <= nums.size(); i++)
    {
        if (nums[i] != i+1)
        {
            miss = i+1;
            break;
        }
        
    }
    cout<<miss<<endl;
    
    
    
    return 0;
}