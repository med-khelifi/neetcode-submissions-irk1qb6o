class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;

        for(int& n : nums) freq[n]++;

        for(auto& p : freq){
            if(p.second > nums.size()/2) return p.first;
        }
    }
};