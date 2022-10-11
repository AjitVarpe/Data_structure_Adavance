class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_candies = -1;
        for(int i=0;i<candies.size();i++){
            max_candies = max(max_candies,candies[i]);
        } 
        vector<bool> v;
        for(int i=0;i<candies.size();i++){
            if(candies[i] + extraCandies >= max_candies){
                v.push_back(true);
            }else
            {
                v.push_back(false);
            }  
        }
        return v;
    }
};