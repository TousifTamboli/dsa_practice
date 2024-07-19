#include<iostream>

using namespace std;

int selection_sort(int nums[], int n){
    for (int i = 0; i <= n-2; i++)
    {
        int min = i;
        for (int j = i; j <= n-1; j++)
        {
            if (nums[j] < nums[min])
            {
                min = j;
            }
        }
        int temp = nums[min];
        nums [min] = nums[i];
        nums[i] = temp;
        // swap(nums[min],nums[i]);

    }
    
}

int main(){
    int n;
    cout<<"Enter number of elements in numsay : ";
    cin>>n;
    int nums[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter Element "<<i+1<<endl;
        cin>>nums[i];
    }

    selection_sort(nums, n);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " "; 
    }

    return 0;
    
}