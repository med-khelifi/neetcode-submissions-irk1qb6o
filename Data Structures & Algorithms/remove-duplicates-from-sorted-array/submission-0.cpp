class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int curr = 1;
        int i = 1;
        while(i < nums.size()){
            if(nums[i] != nums[i -1]){
                nums[curr] = nums[i];
                curr++;
            }
            i++;
        }
        return curr;
    }
};