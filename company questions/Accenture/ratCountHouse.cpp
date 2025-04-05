// The function accepts two positive integers ‘r’ and ‘unit’ and a positive integer array 
// ‘arr’ of size ‘n’ as its argument ‘r’ represents the number of rats present in an area, 
// ‘unit’ is the amount of food each rat consumes and each ith element of array ‘arr’ represents 
// the amount of food present in ‘i+1’ house number, where 0 <= i

#include <bits/stdc++.h>
using namespace std;

int ratCountHouse(int r, int c, vector<int> &h){
    if(r == 0 || h.size() < 0) return -1;
    
    int reqCapacity = r * c;
    int consumed = 0;
    int cnt = 0;
    
    for(int i=0; i<h.size(); i++){
        consumed += h[i];
        cnt++;
        if(consumed > reqCapacity){
            return cnt;
        }
    }

    if(reqCapacity > consumed) return -1;

}


int main(){
    int rats = 5;
    int capacity = 1;

    vector<int> houses = {1, 2, 1};

    int result = ratCountHouse(rats, capacity, houses);

    cout<<result;
}