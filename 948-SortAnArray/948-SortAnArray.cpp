// Last updated: 23/07/2026, 20:27:46
class Solution {
public:

    void merge(vector<int>& nums, int low, int mid, int high) {

        vector<int> temp;

        int left = low;
        int right = mid + 1;

        while (left <= mid && right <= high) {

            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left]);
                left++;
            }
            else {
                temp.push_back(nums[right]);
                right++;
            }
        }

        while (left <= mid) {
            temp.push_back(nums[left]);
            left++;
        }

        while (right <= high) {
            temp.push_back(nums[right]);
            right++;
        }

        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
    }
 //merge sort logic
    void mergeSort(vector<int>& nums, int low, int high) {
        // Base Case
        if (low >= high)
            return;
        int mid = low + (high - low) / 2;

        mergeSort(nums, low, mid);  // Left Half
        mergeSort(nums, mid + 1, high);  // Right Half
        merge(nums, low, mid, high); // Merge Both Halves
    }

    vector<int> sortArray(vector<int>& nums) {

        mergeSort(nums, 0, nums.size() - 1);

        return nums;
    }
};
    