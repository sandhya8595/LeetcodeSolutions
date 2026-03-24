// Last updated: 24/03/2026, 14:29:30
class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            st.push(s[i]);//new stack st me elem ko insert krenge
        }
        int i =0;//reset the index
     while(!st.empty()){
        s[i]=st.top();
        st.pop();
        i++;
    }
    }
};