#include<bits/stdc++.h>

using namespace std;

vector<int> rearrangeArray(vector<int> &nums){
    vector<int> ans(nums.size(), 0);
    int posiIndex = 0;
    int negiIndex = 1;

    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i] < 0){
            ans[negiIndex] = nums[i];
            negiIndex += 2;
        }
        else{
            ans[posiIndex] = nums[i];
            posiIndex += 2;
        }
    }

    return ans;
    
}

int main(){
    vector<int> nums = {3,1,-2,-5,2,-4};
    vector<int> arrangedArray = rearrangeArray(nums);

    cout<<"Rearranged array is : ";

    for (int i = 0; i < arrangedArray.size(); i++) {
        cout << arrangedArray[i] << " ";
    }
    cout << endl;

    return 0;
}