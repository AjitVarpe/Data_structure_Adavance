class Solution {
public:
    int maxDepth(string s) {
      int  res=0,cur=0;
      for(int i=0;i<s.size();i++){
          if(s[i] == '(')
          res = max(res,++cur);
          if(s[i]==')')
          cur--;
         }
         return res;  
    }
};
#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;

int main(){
    


    return 0;
}