// Last updated: 24/03/2026, 14:30:02
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int start = 0,end = numbers.size()-1;
       
        while(start<end){
             int sum = numbers[start]+numbers[end];
            if(sum==target){
                ans.push_back(start+1);
                ans.push_back(end+1);
               return ans;
            }
            else if(sum<target){
                start++;
            }
            else{
                end--;
            }
        }
        return numbers;
        
    }
};