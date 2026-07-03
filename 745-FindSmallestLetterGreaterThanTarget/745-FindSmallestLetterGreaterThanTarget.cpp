// Last updated: 03/07/2026, 14:50:04
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start = 0;
        int end = letters.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (letters[mid] <= target) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        if (start == letters.size()) {
            return letters[0];      // Wrap around
        }

        return letters[start];
    }
}; 
//interview
//This problem is based on the Upper Bound concept. During binary search, whenever letters[mid] <= target, I move start to mid + 1 because those elements cannot be the answer. When letters[mid] > target, I move end to mid - 1 because mid could be the answer, but there might be a smaller valid element on the left. After the loop, start points to the first element greater than the target, so I return letters[start]. If start becomes equal to letters.size(), it means no greater element exists, so I return letters[0] as the problem requires a wrap-around."