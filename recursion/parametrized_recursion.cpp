#include<iostream>

using namespace std;

void sumByRecurssion(int i, int sum){
    if (i < 1)
    {
        cout<<"Sum is: "<<sum<<endl;
        return;
    }
    sumByRecurssion(i-1, sum+i);
}

int main() {
    int sum = 0;
    int i = 3;

    cout<<"N is: "<<i<<endl; 
    sumByRecurssion(i, sum);

    return 0;
}