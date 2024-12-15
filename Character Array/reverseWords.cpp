#include <iostream>
using namespace std;

string TraverseString(string &s)
{
    int start = 0;
    int end = s.length() - 1;

    string temp = "";
    string ans = "";

    while (start <= end && s[start] == ' '){
        start++;
    }

    while (end >= start && s[end] == ' '){
        end--;
    }
    

    while (start <= end)
    {
        char ch = s[start];
        

        if (ch != ' ')
        {
            temp += ch;
        }
        else if (ch == ' ')
        {
            if (ans != "")
            {
                ans = temp + " " + ans;
            }
            else
            {
                ans = temp;
            }
            temp = "";
        }
        start++;

        // cout << temp;
    }

    if (temp!="") {
        if (ans!="") ans = temp + " " + ans;
        else ans = temp;
    }

    cout << ans;
    // return ans;
}

int main()
{

    string s = "hello world";

    // Stores length of the string
    int n = s.length();

    cout << "After reversing words: " << endl;
    TraverseString(s);

    return 0;
}