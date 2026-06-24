// Last updated: 24/06/2026, 12:22:46
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp; // hashmap

        for(int i = 0; i < nums.size(); i++) {

            if(mp.find(nums[i]) != mp.end()) {
                if(i - mp[nums[i]] <= k)
                    return true;
            }

            mp[nums[i]] = i;
        }

        return false;
    }
};//hash map key value paisr me dta ko store krta hai
//Operation	Time
// Insert	O(1)
// Search	O(1)
// Delete	O(1)