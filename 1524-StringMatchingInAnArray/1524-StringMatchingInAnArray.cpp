// Last updated: 31/07/2026, 23:59:00
class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
       vector<string>ans;
       for(int i =0;i<words.size();i++){
        for(int j =0;j<words.size();j++){
            //agr j wrd match nhi krta to sirf j hi bdega.. agr last tk nhi to i badh jyega
            if(i==j) continue;

            if(words[j].find(words[i]) != string::npos){
                ans.push_back(words[i]);
                break;
            }
        }
       } 
       return ans;
    }
};