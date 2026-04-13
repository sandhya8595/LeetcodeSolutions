// Last updated: 14/04/2026, 00:08:21
class Solution {
public:
    string addBinary(string a, string b) {
        int an = a.size();
        int bn = b.size();
          string s;
          if(an>bn){
            b=s.append(an-bn,'0')+b;
          }
          else if(bn>an){
            a=s.append(bn-an,'0')+a;
          }
          // string == length ki hai to
           int carry =0;
            string ans;
             for(int i =a.size()-1;i>=0;i--){
                int sum =(a[i]-'0')+(b[i]-'0')+carry;
                 ans =to_string(sum%2)+ans;
                 carry=sum/2;
             }
             if(carry!=0)
             ans="1"+ans;
              return ans ;
    }
};
//(a[i]-'0') ye strn ko integer me convert krega 
