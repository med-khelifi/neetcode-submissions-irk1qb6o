class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        int l,r,sum;
        for (int i = 0; i < nums.size() - 2; i++) {
            // skip duplicates for i in case of i = 0 nothing happend (0-1 = -1)
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            l = i + 1;
            r = nums.size() - 1;

            while (l < r) {
                sum = nums[i] + nums[l] + nums[r];

                if (sum == 0) {
                    res.push_back({nums[i], nums[l], nums[r]});

                    // skip duplicates when we find a valid result
                    while (l < r && nums[l] == nums[l + 1]) l++;
                    while (l < r && nums[r] == nums[r - 1]) r--;

                    l++;
                    r--;
                }
                else if (sum < 0) {
                    l++;
                }
                else {
                    r--;
                }
            }
        }
        return res;
    }
};