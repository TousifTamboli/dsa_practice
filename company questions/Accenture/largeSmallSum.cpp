// The function accepts an integers arr of size ’length’ as its arguments you are required to
// return the sum of second largest largest element from the even positions and second smallest
//  from the odd position of given ‘arr’.

#include <bits/stdc++.h>
using namespace std;


//time - (n log n), space - O(n)
// int largeSmallSum(vector<int> &a) {

//     int n = a.size();

//     if(n == 0) return 0;
//     if(n <= 3) return 0;

//     vector<int> even;
//     vector<int> odd;

//     for(int i=0; i<n; i++){
//        
//         if(i % 2 == 0){
//             even.push_back(a[i]);
//         }
//         
//         else{
//             odd.push_back(a[i]);
//         }
//     }

//     if(even.size() < 2 || odd.size() < 2) return -1;

//     sort(even.begin(), even.end());
//     sort(odd.begin(), odd.end());

//     int ans = even[even.size()-2] + odd[1];

//     return ans;


// }


//optimal : O(n), O(1)
int largeSmallSum(vector<int>& a) {
    int n = a.size();
    if(n == 0 || n <= 3) return 0;

    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            if(a[i] > max1) {
                max2 = max1;
                max1 = a[i];
            } else if(a[i] > max2) {
                max2 = a[i];
            }
        } else {
            if(a[i] < min1) {
                min2 = min1;
                min1 = a[i];
            } else if(a[i] < min2) {
                min2 = a[i];
            }
        }
    }

    if(max2 == INT_MIN || min2 == INT_MAX) return 0;

    return max2 + min2;
}

int main()
{
    // vector<int> a = {3, 2, 1, 7, 5, 4};
    vector<int> a = {1, 8, 0, 2, 3, 5, 6};

    int result = largeSmallSum(a);

    cout << result;
    return 0;
}