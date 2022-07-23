class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int prod=1;
        while(n!=0){
            
            int digit = n %10;
            prod *= digit;
            sum+=digit;
            n/=10;
        }
        return prod - sum;
    }
};