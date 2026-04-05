
class Solution {
public:
    int minOperations(vector<string> &logs) {
        stack<string> s;
        for (string l: logs) {
            if (l == "../") {
                if (s.size() > 0) s.pop();
            }
            else if (l == "./") continue;
            else {
                s.push(l);
            }
        }

        return s.size();
    }
};