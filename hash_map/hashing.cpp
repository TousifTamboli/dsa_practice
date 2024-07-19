#include<iostream>
#include<map>

using namespace std;

int main(){
    
    int n;
    cout<<"Enter Number of elements : ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter Element "<<i+1<<endl;
        cin>>arr[i];
    }

    //pre-compute
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    //iterate on the map
    // for(auto it : mpp){
    //     cout<< it.first<< "->"<<it.second<<endl;
    // }

    int q;
    cout<<"Enter how many queries: "<<endl;
    cin >> q;
    while (q--)
    {
        int number;
        cout<<"Enter Number to Search:"<<endl;
        cin>>number;
        //fetch
        cout<<"The Number "<<number<<" appears "<<mpp[number]<<" times"<<endl;
    }
     
    
    return 0;
}