class Solution {
public:
    long long int BinarySearch (int number){
        int s =0 ,e = number;
        long long int squre;
        long long int ans,mid = s + (e-s)/2;
        while(s<=e){
            squre = mid * mid ;
            if(mid * mid == ans){ return mid;}
            if(squre > number){ e = mid -1;}
            else{ ans =mid;
            s = mid + 1;}
            mid = s + (e-s)/2;
        }
        return ans;
    }
    int mySqrt(int x) {
        return BinarySearch(x);
    }
};

// the Above ans uses the binary search approch to find out the Output of Squre root of given number 
