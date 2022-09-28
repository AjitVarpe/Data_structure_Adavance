// First Bad Version
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {

    // the time complexity is o(n) here 
public:
    int firstBadVersion(int n) {
     for(int i=1;i<=n;i++){
         if(isBadVersion(i)){
             return i;
         } 
     }
        return -1;
    }
};

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);


// the time complexity is o(log n ) where the binary search approch is used to solve the problem in 

class Solution {
public:
    int firstBadVersion(int n) {
     int s = 0 ,e = n,bad;
        int mid = s + (e-s)/2;
        while(s<=e){
            if(isBadVersion(mid)){
                bad = mid;
                e = mid - 1;
            }else{
                s = mid +1;
            }
            mid = s + (e-s)/2;
        }
        return bad;
    }
};