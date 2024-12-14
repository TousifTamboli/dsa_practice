// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;

void learnCode(string s){
    int n = s.length();
    int i = 0;
    int j = 0;
    string result;
    while(i<n){
        j = i + 1;
        while(j<n && s[i]==s[j]){
            j++;
        }
        result.push_back(s[i]);
        i=j;
    }
    cout<<result;
    
}

int main() {
    // Write C++ code here
    string s = "aabbccc";
    
    learnCode(s);

    return 0;
}