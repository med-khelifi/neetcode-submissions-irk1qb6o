class Solution {
public:

    // Merge two sorted halves of the array
    void merge(vector<int>& nums, int left, int mid, int right) {
        vector<int> temp; // temporary array
        
        int i = left;      // pointer for left half
        int j = mid + 1;   // pointer for right half

        // Compare elements from both halves
        while(i <= mid && j <= right) {
            if(nums[i] <= nums[j]) {
                temp.push_back(nums[i]);
                i++;
            } else {
                temp.push_back(nums[j]);
                j++;
            }
        }

        // If left half still has elements
        while(i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }

        // If right half still has elements
        while(j <= right) {
            temp.push_back(nums[j]);
            j++;
        }

        // Copy sorted elements back into original array
        for(int k = left; k <= right; k++) {
            nums[k] = temp[k - left];
        }
    }

    // Recursive merge sort function
    void mergeSort(vector<int>& nums, int left, int right) {
        if(left >= right) return;

        int mid = left + (right - left) / 2;

        // Sort left half
        mergeSort(nums, left, mid);

        // Sort right half
        mergeSort(nums, mid + 1, right);

        // Merge the two halves
        merge(nums, left, mid, right);
    }

    vector<int> sortColors(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};