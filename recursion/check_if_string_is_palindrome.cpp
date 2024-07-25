#include <iostream>
#include <vector>
using namespace std;

bool reverseString(int i, string &s) {
    if (i >= s.size() / 2) return false;
    if (s[i] == s[s.size()-i-1]) return true;
    return reverseString(i+1, s);   
    
}

int main() {
    string s = "amanaplanacanalpanama";

    cout<<reverseString(0, s);


    return 0;
}
