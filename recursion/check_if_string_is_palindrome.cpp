#include <iostream>
#include <vector>
using namespace std;

bool reverseString(int i, string &s) {
    if (i >= s.size() / 2) return false;
    if (s[i] == s[s.size()-i-1]) return true;
    return reverseString(i+1, s);    
    
}

int main() {
    string name = "TOUSIF";

    cout<<reverseString(0, name);


    return 0;
}
