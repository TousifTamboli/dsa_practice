#include <iostream>

using namespace std;

bool valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }
    return false;
}

char toLower(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string a)
{
    int s = 0;
    int e = a.length() - 1;

    while (s <= e)
    {
        if (a[s] != a[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }

    return true;
}

int main()
{

    string s = "A man, a plan, a canal: Panama";

    string temp = "";

    // check valid
    for (int j = 0; j < s.length(); j++)
    {
        if (valid(s[j]))
        {
            temp.push_back(s[j]);
        }
    }

    // in lowercase
    for (int j = 0; j < temp.length(); j++)
    {
        temp[j] = toLower(temp[j]);
    }

    if (checkPalindrome(temp))
    {
        cout<<"Valid";
    }
    else{
        cout<<"Not Valid";
    }

    return 0;
    
}