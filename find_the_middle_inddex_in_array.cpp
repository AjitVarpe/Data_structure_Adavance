class Solution {
public:
   int findMiddleIndex(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int prevSum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if((sum - prevSum - nums[i]) == prevSum)
                return i;
            prevSum += nums[i];
        }
        return -1;
    }
};


