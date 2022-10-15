#include <bits/stdc++.h>
#include <limits>
#include <String>
using namespace std;
// class Solution {
//     private:

int main()
{
    string s;
    cin >> s;
    string str = getvalidstr(s);
    cout << str << endl;
    // toLowercase(str);
    // cout << str << endl;
    // cout << isPalind(str);
}
// 125. Valid Palindrome
class Solution {
    private:
    bool ischar(char ch){
        if((ch>='a'&& ch<='z') || (ch>='A'&& ch<='Z') || (ch>='0'&&ch<='9')){
                    return 1;
                }else{
                    return 0; }
    }
    
char toLowercase(char ch)
{
    
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        {
            return ch;
        }
        else
        {
            return (ch - 'A' + 'a');
        }
    
}
bool isPalind(string s)
{
    for (int i = 0; i < (s.length()) / 2; i++)
    {
        if (s[i] != s[s.length() - i - 1])
        {
            return 0;
        }
    }
    return 1;
}
public:
    bool isPalindrome(string s) {
            string str= "";
            for(int i=0;i<s.length();i++){
                if(ischar(s[i])){
                    str.push_back(s[i]);
                }
            }
            for(int i=0;i<s.length();i++){
            str[i]=toLowercase(str[i]);
            }

            return isPalind(str);
    }
};