class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mapST, mapTS;

        for (int i = 0; i < s.size(); i++) {
            char si = s[i], ti = t[i];

            if ((mapST.find(si) != mapST.end() && mapST[si] != ti) ||
                (mapTS.find(ti) != mapTS.end() && mapTS[ti] != si)) {
                return false;
                }

            mapST[si] = ti;
            mapTS[ti] = si;
        }

        return true;
    }
};