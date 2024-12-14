#include <iostream>
#include <string>
using namespace std;

string intToString(int num) {
        char str[20]; 
        int i = 0;
        bool isNegative = false;

        if (num < 0) {
            isNegative = true;
            num = -num; 
        }

        do {
            str[i++] = (num % 10) + '0'; 
            num /= 10;
        } while (num > 0);

        if (isNegative) {
            str[i++] = '-';
        }

        str[i] = '\0';

        int start = 0, end = i - 1;
        while (start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }

        return string(str);
    }


int stringToInt(const string& num) {
        int result = 0;
        int sign = 1;
        int i = 0;

        if (num[0] == '-') {
            sign = -1;
            i = 1;
        }

        for (; i < num.length(); i++) {
            if (num[i] >= '0' && num[i] <= '9') {
                result = result * 10 + (num[i] - '0');
            } else {
                throw invalid_argument("Invalid character in string");
            }
        }

        return result * sign;
    }


string multiply(string num1, string num2) {
        int number1 = stringToInt(num1);
        int number2 = stringToInt(num2);

        int product = number1 * number2;

        return intToString(product);
    }


int main() {
    string num1 = "123";
    string num2 = "45";
    cout << "Product: " << multiply(num1, num2) << endl;

    return 0;
}