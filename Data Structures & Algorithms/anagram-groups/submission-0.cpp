class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        vector<vector<string>> res;
        for (size_t i = 0; i < strs.size(); i++)
        {
            string word = strs[i];
            sort(word.begin(),word.end());
            map[word].push_back(strs[i]);

        }
        for(pair p : map){
            res.push_back(p.second);
        }
        return res;
        
    }
};
