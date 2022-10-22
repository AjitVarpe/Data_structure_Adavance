// https://leetcode.com/problems/search-a-2d-matrix-ii/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int rowindex = 0,colindex = col-1;

            while(rowindex < row && colindex  >= 0){
                int element = matrix[rowindex][colindex];
                if(element==target){
                    return 1;
                    }
                if(element< target){
                        rowindex++;

                    }
                else{
                    colindex--;
                    }

            }
        return 0;
         
    }
};
#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;

int main(){
    


    return 0;
}