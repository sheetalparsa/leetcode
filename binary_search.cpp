class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int mid = low+(high-low)/2;
        while (low <= high) {
            if (target == nums[mid]) {
                return mid;
            } else if (target > nums[mid]) {
                low = mid+1;
            } else {
                high = mid-1;
            }
            mid = low+(high-low)/2;
        }
        return -1;
    }
};


/*
O(nlogn)
Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
*/
