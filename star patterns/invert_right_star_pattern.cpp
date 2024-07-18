#include <iostream>
using namespace std;

void pyramid(int n)
{
    int i = 0;
    int j = n;
    while (i < n)
    {
        while (j > i)
        {
            cout << "*";
            j--;
        }
        j = n;
        i++;
        cout << endl;
    }
}

int main()
{

    int n = 5;

    pyramid(n);
    return 0;
}