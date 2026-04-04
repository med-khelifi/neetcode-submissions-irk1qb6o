class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 1);

        // left-side products
        int left = 1;
        for (int i = 0; i < n; ++i) {
            res[i] = left;
            left *= nums[i];
        }

        // right-side products
        int right = 1;
        for (int i = n - 1; i >= 0; --i) {
            res[i] *= right;
            right *= nums[i];
        }

        return res;
    }
};