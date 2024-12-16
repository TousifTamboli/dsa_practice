#include<iostream>
using namespace std;

string reverseVowels(string s) {
        string vowels = "aeiouAEIOU";
        int i = 0;
        int j = s.length() - 1;


        while(i<j){
            if(vowels.find(s[i]) < vowels.size()){
                if(vowels.find(s[j]) < vowels.size()){
                    swap(s[i], s[j]);
                    i++;
                    j--;
                }
                else j--;
            }
            else i++;
        }
        return s;
    }

int main(){
    string s = "leetcode";

    string result = reverseVowels(s);

    cout<<result;
}