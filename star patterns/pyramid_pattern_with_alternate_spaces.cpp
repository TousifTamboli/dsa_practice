// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int n = 5;
    int key = n + 1;
    int key2 = n - 1;
    int keyj = (n*2)-1;
    
    for(int i = 1; i<=n; i++){
        int k = 1;
        for(int j = 1; j<=keyj; j++){
            if(j >= key-i && j <= key2+i && k==1){
                cout<<"*";
                k = 0;
            }
            else{
                cout<<" ";
                k=1;
            }
        }
        cout<<endl;
    }

    return 0;
}