#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v) {

    int n = v.size();
    // cout<<n/2;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (v[j] == v[i]) {
                count++;
            }
        }

        if (count > (n / 2))
            return v[i];
    }

    return -1;
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(nums);
    cout << "The majority element is: " << ans << endl;
    return 0;
}


