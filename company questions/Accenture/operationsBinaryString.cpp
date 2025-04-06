// The Binary number system only uses two digits, 0 and 1 and number system can be called binary string.
//  You are required to implement the following function:

// int OperationsBinaryString(char* str);

// The function accepts a string str as its argument. The string str consists of binary 
// digits eparated with an alphabet as follows:

// - A denotes AND operation
// - B denotes OR operation
// - C denotes XOR Operation
// You are required to calculate the result of the string str, scanning the string to right 
// taking one opearation at a time, and return the same.

#include <bits/stdc++.h>
using namespace std;

int operationsBinaryString(string str) {
    if(str.length() == 0){
        return -1;
    }
    
    int ans = str[0] - '0';  // Convert char to int

    for(int i = 1; i < str.size(); i += 2) {
        char op = str[i];
        int num = str[i+1] - '0'; 
        
        if(op == 'C'){
            ans = ans ^ num;
        } 
        else if(op == 'A'){
            ans = ans & num;
        }
        else if(op == 'B'){
            ans = ans | num;
        }
    }

    return ans;
}

int main(){
    string str = "1C0C1C1A0B1";
    cout << operationsBinaryString(str) << endl;
    return 0;
}
