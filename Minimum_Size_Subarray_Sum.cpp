// 209. Minimum Size Subarray Sum
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0, j=0, sum=0, ans=nums.size()+1;
        while(j<nums.size()){
            sum+=nums[j++];
            while(sum>=target){
                ans=min(ans, j-i);
                sum-=nums[i++];
            }
        }
        return ans%(nums.size()+1);
    }
};

// the above code contain the sliding window approch to solve the problem of give question type


// for ex the array consist of int arr[10] = {1,2,3,4,5,6,7,8,9,10};
// so the sliding window apporch uses the approch the window will slide from 1 2 3 4 to next slide to 2 3 4 5 to next slide 3 4 5 6
 