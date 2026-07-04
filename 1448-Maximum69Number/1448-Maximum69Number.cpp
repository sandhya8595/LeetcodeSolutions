// Last updated: 04/07/2026, 14:29:09
class Solution {
public:               //easy
    int maximum69Number (int num) {

        string s = to_string(num);

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '6') {
                s[i] = '9';  //if match then replace 6 with 9
                break;
            }
        }
        return stoi(s); //this is fxn that convert string to integer
    }
};
    
// stoi()	String → int
// stol()	String → long
// stoll()	String → long long
// stof()	String → float
// stod()	String → double
// to_string()	Number → String
