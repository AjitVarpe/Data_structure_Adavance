class Solution {
public:
    int bitwiseComplement(int n) {
        int m=n;
        int ma = 0;
        if(n==0) return 1;
        while(m!=0){
            ma = (ma<<1) |1;
            m = m >> 1;
        }
        int ans = (~n) & ma;
        return ans;
    }
};