class Solution {
public:
    int lengthOfLIS(vector<int>& A) {
        vector<int> temp;
    temp.push_back(A[0]);
    for(int i=1;i<A.size();i++){
        if(A[i]>temp.back()){
            temp.push_back(A[i]);
        }
        else{
            int ind=lower_bound(temp.begin(),temp.end(),A[i])-temp.begin();
            temp[ind]=A[i];
        }
    }
    return temp.size();
    }
};