// Last updated: 24/03/2026, 14:30:21
class Solution {
public:
    bool isPalindrome(string s) {
        //two pointer 
        int i=0,j=s.size()-1;
        while(i<j){
            //skip  non alphanumeric from left side
            while(i<j && !isalnum(s[i])) i++;
            // from right side
            while(i<j && !isalnum(s[j])) j--;
            //using two pointer first and last str ko campare krenge  with lowercase
            if(tolower(s[i])!=tolower(s[j]))
            return false;
            i++;
            j--;
        }
        return true;
    }
};