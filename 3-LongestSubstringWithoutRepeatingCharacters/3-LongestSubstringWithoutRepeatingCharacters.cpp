// Last updated: 24/03/2026, 14:31:21
class Solution {
public:
    int lengthOfLongestSubstring(string s){
       set<char>st;
        int left=0;  // like a pointer
        int maxlength=0;
        //right pointer move everytime but left move when duplicate found
        for(int right=0;right<s.size();right++) {
           // if any char exist then removed from left
            while(st.count(s[right])){
                st.erase(s[left]); //remove 
                left++;
            }
                  st.insert(s[right]);
                  
                  maxlength=max(maxlength,right-left+1);
        }
                  return maxlength;
    }
};