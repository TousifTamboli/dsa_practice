#include<iostream>
using namespace std;

int main(){

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j>=i  && j<=10-i)
            {
                cout<<"*";
            }else{
                cout<<" ";
            }
            
        }
        cout<<endl;
        
    }

    int n = 5;
    int key = n + 1;
    int key2 = n - 1;
    int keyj = (n*2)-1;
    
    for(int i = 2; i<=n; i++){
        for(int j = 1; j<=9; j++){
            if(j >= 6-i && j <= 4+i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
}