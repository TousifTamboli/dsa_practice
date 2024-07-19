#include<iostream>

using namespace std;

void bubble_sort(int nums[], int n){
    for (int i = n-1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (nums[j] > nums[j+1])
            {
                int temp = nums[j+1];
                nums[j+1] = nums[j];
                nums[j] = temp;
            }
            
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

    bubble_sort(nums, n);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " "; 
    }

    return 0;
    
}