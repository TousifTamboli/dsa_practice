#include<iostream>

using namespace std;

void nTimes(int n, int i){
    if (i < 1) return;

    cout<<i<<endl;
    
    nTimes(n, i - 1);
    
}

int main(){
    int n = 5;
    int i = 5;

    nTimes(n, i);
}