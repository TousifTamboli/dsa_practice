#include<iostream>
#include<vector>
#include<math.h>

using namespace std;


int mySqrt(int x) {
        if (x == 0 || x == 1)
            return x;

        int s = 1;
        int e = x;
        long long mid;
        long long ans = 0;

        while (s <= e) {
            mid = s + (e - s) / 2;
            long long square = mid * mid;

            if (square == x) {
                return mid;
            } else if (square < x) {
                ans = mid;
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return ans;
    }


int main(){
    int x = 4;

    int answer = mySqrt(x);

    cout<<"The square root of " <<x<< "is "<<answer;
}
