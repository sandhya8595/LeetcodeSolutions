// Last updated: 12/04/2026, 20:24:42
class Solution {
public:
    int lengthOfLastWord(string s) {
       int count =0;
        for(int i =s.size()-1;i>=0;i--){
            if( s[i] != ' '){ //last se check krnge agr last space nhi to means letter hai aur count ko increased krte jayege jbtk nother space nhi mil jata hai
                count++;
             }
            else{
                if(count>0)
                    return count;
                }

            }
        return count;
    }
};