#include<iostream>

using namespace std;

int main(){

    int nums[] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = sizeof(nums)/sizeof(nums[0]);

    int i;
    int j = 0;

    for ( i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            nums[j++] = nums[i];
            
        }
        
    }

    for (i = j; i < n; i++)
    {
        nums[i] = 0;
    }
    

    for (i = 0; i < n; i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    
    
}