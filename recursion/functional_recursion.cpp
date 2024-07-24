#include<iostream>

using namespace std;

int function(int n){
    if (n == 0) return 0;

    return n + function(n-1);
    
}

int main(){
    // int sum = 0;
    int n = 3;

    cout<<function(n);

    return 0;
}