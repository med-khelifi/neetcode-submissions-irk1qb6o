class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> _set;
        int l = 0;
        int res = 0;

        for (int r = 0; r < s.size(); r++) {
            while (_set.find(s[r]) != _set.end()) {
                _set.erase(s[l]);
                l++;
            }

            _set.insert(s[r]);
            res = max(res, r - l + 1);
        }

        return res;
    }
};