// Last updated: 24/03/2026, 14:31:10
class Solution {
public:
    bool isValid(string str) {
       stack<char>st;
    for(int i=0;i<str.size();i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){//opening
            st.push(str[i]);
        }
        else{
            if(st.size()==0){//closing
            return false;
        }
          if(st.top()=='(' && str[i]==')' ||
           st.top()=='{' && str[i]=='}'||
           st.top()=='[' && str[i]==']'){
           st.pop();
        }
        else{ // not matches
        return false;
        }
    }
    }
     return st.size()==0;
    }
};