#include<iostream>

using namespace std;

void insertion_sort(int nums[], int n){
    for (int i = 0; i <= n-1 ; i++)
    {
        int j = i;
        while (j>0 && nums[j-1] > nums[j])
        {
            int temp = nums[j-1];
            nums[j-1] = nums[j];
            nums[j] = temp;
            j--;
        }
        
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

    insertion_sort(nums, n);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " "; 
    }

    return 0;
    
}