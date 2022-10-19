class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
         int value=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==value)
            value++;
        }
        return value;
    }
};
#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;

int main(){
    


    return 0;
}