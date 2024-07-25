#include<iostream>
#include<vector>

using namespace std;

int twoSum(vector<int>& arr, int target){
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout<<"The Elements are : "<<arr[i]<<" , "<<arr[j]<<endl;
            }
            
        }
        
    }
    
}

int main(){
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;

    twoSum(arr, target);

    return 0;
}