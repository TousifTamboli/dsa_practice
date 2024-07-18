#include<iostream>

using namespace std;

int findMinMax(int arr[], int n, int &min, int &max){
    int i;

    if(n % 2 == 0){
        if (arr[0]>arr[1])
        {
            max = arr[0];
            min = arr[1];
        }
        else {
            max = arr[1];
            min = arr[0];
        }
        i = 2;
        
    }
    else{
        min = arr[0];
        max = arr[0];
        i = 1;
    }

    while (i < n -1)
    {
        if (arr[i] > arr[i + 1])
        {
            if (arr[i] > max)
            {
                max = arr[i];
                
            }
            if (arr[i + 1] < min)
            {
                min = arr[i + 1];
            }
            
        }
        else{
            if (arr[i + 1] > max) 
            {
                max = arr[i + 1];
            }
            if (arr[i] < min)
            {
                min = arr[i];
            }

            i +=2;
            
        }
        
    }
   

        
}

int main(){
    int arr[] = {8, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min, max;

    findMinMax(arr, n, min, max);


    cout<< "max:" <<max << endl;
    cout<< "min:" <<min << endl;
    cout<< n;

    return 0;
   

}