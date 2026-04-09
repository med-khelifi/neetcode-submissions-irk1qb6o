class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       unordered_set<int> set;
       int l =0,r =0;
      
       while(r < nums.size()){
        if(r-l > k)
            set.erase(nums[l++]);
        if(set.contains(nums[r])) return true;
            set.insert(nums[r++]);
       }
       return false;
    }
};