// Last updated: 24/03/2026, 14:29:23
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
    // based on  slinding window
    vector<int>result;
    int n = s.size();
    int k = p.size();

    vector<int>s_count(26,0); // there are 26 alpha thats why fix
    vector<int>p_count(26,0);
    if(k > n) return result;
  
    // count char of p
     for(int i=0;i<k;i++){
        p_count[p[i]-'a']++;
     }
 
         for(int i =0;i<k;i++){
           s_count[s[i]-'a']++;
         }
        
          if(s_count==p_count){
            result.push_back(0);
           }
         //slinding the window
           for(int i=k;i<n;i++){

            // add the new elm
             s_count[s[i]-'a']++;

             // dlt the elmnt
            s_count[s[i-k]-'a']--;
        
            if(s_count==p_count){
            result.push_back(i-k+1);
            }
           }
           
        return result;
    }
};