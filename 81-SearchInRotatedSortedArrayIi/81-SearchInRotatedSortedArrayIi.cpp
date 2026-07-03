// Last updated: 03/07/2026, 15:52:10
class Solution {
public:
    bool search(vector<int>& nums, int target) {

        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {

            int mid = start + (end - start) / 2;

            if (nums[mid] == target)
                return true;

            // Handle duplicates
            if (nums[start] == nums[mid] && nums[mid] == nums[end]) {
                start=start+1;
                end=end-1;   //3,3,1,3,3,3,3
                continue;
            }

            // Left half is sorted
            if (nums[start] <= nums[mid]) {

                if (nums[start] <= target && target < nums[mid])
                    end = mid - 1;
                else
                    start = mid + 1;
            }

            // Right half is sorted
            else {

                if (nums[mid] < target && target <= nums[end])
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }

        return false;
    }
};

//Why does adding duplicates change the complexity from O(log n) to O(n)?

//Without duplicates, we can always determine which half is sorted and discard half of the array. With duplicates, when nums[start] == nums[mid] == nums[end], we cannot identify the sorted half, so we shrink the search space by one element from each side. In the worst case, this leads to linear time."