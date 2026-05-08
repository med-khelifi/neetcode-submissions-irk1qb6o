class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {  
        long l = 1,r=maxVal(piles);
        long res = r;
        while(l<=r){
            long k = l + (r-l)/2;
            if(isValid(piles,h,k)){
                res = min(res,k);
                r = k-1;
            }else{
                l = k+1;
            }
        }
        return res;
    }
    bool isValid(vector<int>& piles, int h,int k){
        long res = 0;
        for(int i = 0; i<piles.size();i++){
            res += (piles[i] + k - 1) / k;
        }
        return res <= h;
    }
    int maxVal(vector<int>& piles){
        int res = -1;
        for(int i = 0; i<piles.size();i++){
            res = max(res,piles[i]);
        }
        return res;
    }
};