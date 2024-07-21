#include<iostream>

using namespace std;

void nTimes(int n, int i){
    if (i > n) return;

    cout<<"Tousif"<<endl;

    nTimes(n, i + 1);
    
}

int main(){
    int n = 5;
    int i = 1;

    nTimes(n, i);
}