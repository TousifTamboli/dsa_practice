#include<iostream>
#include<cstring>

using namespace std;

char highestOccurringChar(char input[]) {
    // Write your code here

    int n = strlen(input);
    int arr[26] = {0};
    int index;

    for (int i = 0; i < n; i++)
    {
        char ch = input[i];
        index = ch - 'a';
        arr[index]++;
    }

    int max = -1;
    int ans = 0;

    for (int i = 0; i < 26; i++)
    {
        if (max < arr[i])
        {
            ans = i;
            max = arr[i];
        }
    }
    return 'a' + ans;
    
    
}

int main(){
    char input[] = "aabbb";

    char result = highestOccurringChar(input);

    cout<<result;

    return 0;
}