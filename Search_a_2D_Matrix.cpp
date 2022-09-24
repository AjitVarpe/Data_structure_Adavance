// 74. Search a 2D Matrix
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      if(!matrix.size())return false;
    
    int low = 0, end = matrix.size()-1;
    
    while(low <= end){
        
        int mid = (low+end)/2;
        int start = 0, last = matrix[0].size()-1;
        
        while(start <= last){
            
            int mid2  = (start+last)/2;
            
            if(matrix[mid][mid2] == target)
                return true;
            
            if(matrix[mid][mid2] < target)
                start = mid2+1;
            else
                last = mid2-1;
        }
        if(last == matrix[0].size()-1)
            low = mid+1;
        else
            end = mid-1;
        
    }
    return false;
    }
};