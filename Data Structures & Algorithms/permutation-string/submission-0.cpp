class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        unordered_map<char,int> s1Count, window;

        for (char c : s1)
            s1Count[c]++;

        for (int i = 0; i < s2.size(); i++) {
            window[s2[i]]++;

            // remove left character if window is too big
            if (i >= s1.size()) {
                char left = s2[i - s1.size()];
                window[left]--;
                if (window[left] == 0) {
                    window.erase(left); // 🔥 important fix
                }
            }

            if (window == s1Count)
                return true;
        }

        return false;
    }
};