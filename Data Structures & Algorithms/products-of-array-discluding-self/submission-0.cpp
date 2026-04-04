class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ltr(n,1);
        vector<int> rtl(n,1);
        
        for(int i = 1; i < n; i++){
            ltr[i] = ltr[i-1] * nums[i-1];
        }
        
        for(int i = n-2; i >= 0; i--){
            rtl[i] = rtl[i+1] * nums[i+1];
        }
        
        vector<int> res(n);
        for(int i = 0; i < n; i++){
            res[i] = ltr[i] * rtl[i];
        }
        
        return res;
    }
};