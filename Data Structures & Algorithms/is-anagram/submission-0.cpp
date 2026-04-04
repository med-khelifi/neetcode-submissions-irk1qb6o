class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char, int> countMap;
        for(char c : s) {
            countMap[c]++;
        }
        for(char c : t) {
            countMap[c]--;
        }
        for(auto& pair : countMap) {
            if(pair.second != 0) return false;
        }
        return true;
    }
};
