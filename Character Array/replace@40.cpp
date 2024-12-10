#include <bits/stdc++.h>
using namespace std;

string replaceSpaces(string &str) {
    string result;

    for (char ch : str) {
        if (ch == ' ') {
            result += "@40"; 
        } else {
            result += ch; 
        }
    }

    return result;
}

int main() {
    string s = "a good example";
    cout << replaceSpaces(s) << endl;
    return 0;
}
