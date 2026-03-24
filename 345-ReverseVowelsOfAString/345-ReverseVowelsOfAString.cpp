// Last updated: 24/03/2026, 14:29:29
class Solution {
public:
      bool  isVowel(char c){
            c= tolower(c);
            return (c=='a'|| c=='e'||c=='i'||c=='o'||c=='u');
          }
    string reverseVowels(string s) {
       int n= s.size();
        int l=0;
        int r=n-1;
        while(l<r){
            while(l<r && !isVowel(s[l]))
            l++;
            while(l<r && !isVowel(s[r]))
            r--;
            swap(s[l],s[r]);
            l++;
            r--;
        }
     return s;
    }
};