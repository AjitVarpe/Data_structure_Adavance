class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth = -1;
        for(int i=0;i<accounts.size();i++){
           max_wealth = max(max_wealth,( accumulate(accounts[i].begin(),accounts[i].end(),0)));
        }
        return max_wealth;
    }
};