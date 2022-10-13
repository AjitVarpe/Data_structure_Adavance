
// Current Functions returns True If the given number is in power of Four 
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0) return false;
        if(n==1) return true;
        if(n%4==0) return isPowerOfFour(n/4);
        return false;
    }
};

// The function returns the power of three 
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0) return false;
        if(n==1) return true;
        if(n%3==0) return isPowerOfFour(n/3);
        return false;
    }
};