// Last updated: 23/06/2026, 00:59:27
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string t = s + s; // stri g ko double time wrt 
        return t.substr(1, t.size() - 2).find(s) != string::npos;
    }
};
    //t.substr(1, t.size() - 2) :- ye basically stating and last se char ko remove kr =ne ke liye....
    