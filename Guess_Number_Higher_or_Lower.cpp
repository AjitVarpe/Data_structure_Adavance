// 374. Guess Number Higher or Lower
/* 
 * 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
      int first=1, last=n,mid=0,temp=0;
        while(first<=last)
        {
            mid = first+(last-first)/2;
            temp = guess(mid);
            if(temp==0)
                return mid;
            else if(temp==-1)
                last=mid-1;
            else
                first=mid+1;
        }
        return mid;  
    }
};