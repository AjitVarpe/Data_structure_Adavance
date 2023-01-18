#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;

int main(){
    int size = 4;
    auto target = 11;
    int arr[size]={2,5,9,11};
    int left=0,right = size-1;
    while (left < right)
    {
        int current = arr[left] + arr[right];
        if(current == target){
            break;
        }
        if(current> target){
            right = right -1;
        }
        else{
            left = left+ 1;
        }
    }
    cout<<left<<" "<<right;
    
    return 0;
}

// Alternative Approch for the same Two pointer Approch 
class PairWithTargetSum {
 public:
  static pair<int, int> search(const vector<int>& arr, int targetSum) {
    unordered_map<int, int> nums;  // to store number and its index
    for (int i = 0; i < arr.size(); i++) {
      if (nums.find(targetSum - arr[i]) != nums.end()) {
        return make_pair(nums[targetSum - arr[i]], i);
      } else {
        nums[arr[i]] = i;  // put the number and its index in the map
      }
    }
    return make_pair(-1, -1);  // pair not found
  }
};