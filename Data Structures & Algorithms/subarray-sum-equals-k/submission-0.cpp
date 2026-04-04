class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> prefixSumCount;
        prefixSumCount[0] =1;
        int currentPrefix = 0;
        int result = 0;
        for(int num: nums){
            currentPrefix += num;
            if(prefixSumCount.find(currentPrefix -k) != prefixSumCount.end()){
                result += prefixSumCount[currentPrefix -k];
            }
            prefixSumCount[currentPrefix]++;
        }
        return result;
    }
};