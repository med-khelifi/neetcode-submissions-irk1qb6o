class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int r=nums.size() -1;
        for(int i = 0; i <= r; i++){
            if(nums[i] == val){
                // swap
                nums[i] = nums[r];
                r--;
                i--; // to stay in same place in case nums[r] == val
            }
        }
        return r + 1;
    }
};