// Last updated: 15/07/2026, 16:10:35
class ThroneInheritance {
public:
    unordered_map<string, vector<string>> children;
    unordered_set<string> dead;
    string king;

    ThroneInheritance(string kingName) {
        king = kingName;
    }

    void birth(string parentName, string childName) {
        children[parentName].push_back(childName);
    }

    void death(string name) {
        dead.insert(name);
    }

    void dfs(string person, vector<string>& ans) {
        if (dead.find(person) == dead.end()) {
            ans.push_back(person);
        }

        for (string child : children[person]) {
            dfs(child, ans);
        }
    }

    vector<string> getInheritanceOrder() {
        vector<string> ans;
        dfs(king, ans);
        return ans;
    }
};