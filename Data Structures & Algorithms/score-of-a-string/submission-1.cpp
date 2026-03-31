class Solution {
public:
    int scoreOfString(string s) {
        int res = 0;
        for (int i = 0; i < s.size()-1; i++)
        {
            auto a = static_cast<int>(s[i]);
            auto b = static_cast<int>(s[i+1]);
            cout << a << endl;
            cout<< b << endl;
            res += abs(a - b);
        }

        // res += abs(static_cast<int>(s[s.size()-1]) - static_cast<int>(s[s.size()-2]));
        return res;
    }
};