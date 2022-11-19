class Solution {
public:
    string removeOuterParentheses(string s) {
        
        stack<char> Store;
        string ans = "";
        
        for(int i = 0; i<s.size(); i++){
            if(Store.empty()){
                Store.push(s[i]);
            }
            else if( Store.size() == 1 && s[i] == ')'){
                Store.pop();
            }
            else{
                ans += s[i];
                if(s[i] == '('){
                    Store.push(s[i]);
                }
                else if(s[i] == ')' && Store.top() == '(' ){
                    Store.pop();
                }
            }
        }
        return ans;
    }
};
#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;

int main(){
    


    return 0;
}