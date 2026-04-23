/** 
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
        int l = 0;
        int r = n;
        int pickres = 0;
        int mid =0;
        while(true){
            mid = l + (r-l)/2;
            pickres = guess(mid);
            if(pickres == 0)
                return mid;
            else if(pickres == -1)
                r = mid -1;
            else 
                l = mid + 1;
        }
        return 0;
    }
};