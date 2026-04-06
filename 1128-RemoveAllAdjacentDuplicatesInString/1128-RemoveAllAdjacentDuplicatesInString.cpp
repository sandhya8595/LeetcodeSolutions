// Last updated: 06/04/2026, 11:00:57
class Solution {
public:
    string removeDuplicates(string s) {
        string result ;
         for( int i = 0 ;i<s.size();i++){
         if(!result.empty() && result.back()==s[i]){
            result.pop_back(); // when duplicate occur then pop that value  
         }
         else{
            result.push_back(s[i]); // push  in result if duplicate is not exist
          }
         }
        return result ;
    }
};