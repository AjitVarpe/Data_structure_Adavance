// Recursion Approch 1
 bool isPowerOfThree(int n) {
        if(n==0) return false;
        if(n==1) return true;
        if(n%3==0) return isPowerOfThree(n/3);
        return false;
    }

// Approch 2
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0){return false;}
        while(n%3==0)
           {
                n = n / 3;
                }
        if(n==1){
        return true;
        }
        else
        {
            return false;
            }
    }
  
};

// Approch 3
if(n==0) return false;
while(n%3==0) n /= 3;                 // check till ,it is divisible by 3 as we need to check power 3 
return n==1;

