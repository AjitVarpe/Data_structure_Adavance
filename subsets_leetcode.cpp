0/5
class Solution {
    void solve(vector<int> nums,vector<int> output,int index,vector<vector<int>> &ans){
        // Base condition 
        if(index  >=   nums.size()){
            ans.push_back(output);
            return;
        }

        // exclude
        solve(nums,output,index+1,ans);

        // include
        int element = nums[index];
        output.push_back(element);
        solve(nums,output,index+1,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index =0;
        solve(nums,output,index,ans);
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