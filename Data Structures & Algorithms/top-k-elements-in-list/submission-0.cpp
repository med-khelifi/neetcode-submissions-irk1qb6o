class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> freq;

        // Step 1: Count frequency
        for (int n : nums) {
            freq[n]++;
        }

        // Step 2: Buckets (index = frequency)
        vector<vector<int>> bucket(nums.size() + 1);

        for (auto& p : freq) {
            bucket[p.second].push_back(p.first);
        }

        // Step 3: Collect top K frequent elements
        vector<int> result;

        for (int i = nums.size(); i >= 0 && result.size() < k; --i) {
    for (int j = 0; j < bucket[i].size() && result.size() < k; ++j) {
        result.push_back(bucket[i][j]);
    }
}

        return result;
    }
};