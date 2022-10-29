// https://leetcode.com/playground/8pqrUZcH/live
class Solution {
public:
  vector<string> letterCombinations(string d){
      unordered_map<char, string> mp;
      mp['2'] = "abc";
      mp['3'] = "def";
      mp['4'] = "ghi";
      mp['5'] = "jkl";
      mp['6'] = "mno";
      mp['7'] = "pqrs";
      mp['8'] = "tuv";
      mp['9'] = "wxyz";
        
      int n = d.size(),i = 0; vector<string> res;
      string one = mp[d[i]];
      for (int j = 0; j < one.size(); j++){
          string temp1 = "";
          temp1.push_back(one[j]);
          if (i + 1 < n){
          
              string two = mp[d[i + 1]];
          
              for (int k = 0; k < two.size(); k++){
            
                  string temp2 = temp1;
            
                  temp2.push_back(two[k]);
                  if (i + 2 < n){
              
                      string three = mp[d[i + 2]];

                      for (int l = 0; l < three.size(); l++){

                          string temp3 = temp2;

                          temp3.push_back(three[l]);
                          if (i + 3 < n){

                              string four = mp[d[i + 3]];

                              for (int m = 0; m < four.size(); m++){
                                  string temp4 = temp3;
                                  temp4.push_back(four[m]);
                                  res.push_back(temp4);
                              }
                          }else res.push_back(temp3);
                      }
                  }else res.push_back(temp2);
              }
          }else res.push_back(temp1);
      }
      return res;
    }
};


// 2nd approch

int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n = plantTime.size();
        vector<pair<int, int>> plant(n);        
        
        for(int i=0; i<n; i++) {
			// store growTime[i] & plantTime[i] in pair
            plant[i] = {growTime[i], plantTime[i]};
        }
        
		// sort the vector in non-increasing order 
		// to get grow time of plants in descending order
        sort(plant.begin(), plant.end(),  greater<pair<int, int>>());
        
        int day = 0;
        int ans = 0;
        
        for(int i=0; i<n; i++) {
			// update value of day when planting
            day += plant[i].second;
			// update ans with max of current day + grow time
            ans = max(ans, day+plant[i].first);
        }
        
        return ans;
    }
#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;

int main(){
    


    return 0;
}