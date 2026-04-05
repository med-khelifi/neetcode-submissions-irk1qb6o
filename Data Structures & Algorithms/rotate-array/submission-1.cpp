class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n; // handle k > n
        reverseVector(nums, 0, n - 1);
        reverseVector(nums, 0, k - 1);
        reverseVector(nums, k, n - 1);
    }

    void reverseVector(vector<int>& nums, int s, int e) {
        while (s < e) {
            swap(nums[s], nums[e]);
            s++;
            e--;
        }
    }
};