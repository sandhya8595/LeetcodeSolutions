// Last updated: 24/06/2026, 11:33:08
class Solution {
public:
// LPS
vector<int> computeLPS(string s){
    int n = s.size();
    
    vector<int>lps(n,0);
    int len =0; 
    int i=1; //current inddex

     while(i<n){
        if(s[i]==s[len]){
            len++;
           lps[i]=len;
            i++;
        }else{
            if(len!=0){
                len = lps[len-1];
            }else {
                    lps[i] = 0;
                    i++;
                }
        }
     }
     return lps;
}
    string longestPrefix(string s) {
        vector<int>lps = computeLPS(s);//CALL THE COMPUTE LPS FXN..

        int len = lps[s.size() - 1];
        return s.substr(0, len);

    }
};