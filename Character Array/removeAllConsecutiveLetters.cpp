// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;

void learnCode(string s){
    int n = s.length();
    int i = 0;

    string result = "";
    
    while(i<n){
        if(result == "" || s[i] != result.back()){
            result.push_back(s[i]);
        }
        else{
            result.pop_back();
        }
        i++;
    }
    cout<<result;
    
}

int main() {
    // Write C++ code here
    string s = "abbaca";
    
    learnCode(s);

    return 0;
}