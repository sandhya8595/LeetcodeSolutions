// Last updated: 24/03/2026, 14:29:12
class Solution {
public:
      bool isPalindrome(string &s, int l,int r){
        // helper fxn (to pass all cases)
          while(l<r){
            if(s[l]!=s[r])
                return false;// after this code will be not executed
                l++;
                r--;
            }
         return true;
      }

    bool validPalindrome(string s) {
        //optimal approach using two pointer
        int l=0;
        int r = s.size()-1;
        while(l<r){
            if(s[l]==s[r]){
                l++;
                r--;
              }
         else{
           return isPalindrome(s,l+1,r) || isPalindrome(s,l,r-1);
          }
        }
        return true;
    }
};