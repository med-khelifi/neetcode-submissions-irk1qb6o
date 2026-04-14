class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int maxfreq = 0;
        unordered_map<char,int> letterCount;
        int res = 0;

        for (int r = 0; r < s.size(); r++) {
            letterCount[s[r]]++;
            maxfreq = max(maxfreq, letterCount[s[r]]);

            while ((r - l + 1) - maxfreq > k) {
                letterCount[s[l]]--;
                l++;
            }

            res = max(res, r - l + 1);
        }

        return res;
    }
};