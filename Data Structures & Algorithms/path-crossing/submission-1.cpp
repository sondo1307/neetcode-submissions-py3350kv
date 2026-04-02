class Solution
{
public:
    bool isPathCrossing(string path)
    {
        unordered_map<char, pair<int, int> > mp;
        mp.insert(pair<char, pair<int, int> >('E', make_pair(1, 0)));
        mp.insert(pair<char, pair<int, int> >('W', make_pair(-1, 0)));
        mp.insert(pair<char, pair<int, int> >('S', make_pair(0, -1)));
        mp.insert(pair<char, pair<int, int> >('N', make_pair(0, 1)));
        mp.insert(pair<char, pair<int, int> >('O', make_pair(0, 0)));
        unordered_set<string> s;
        int x = 0;
        int y = 0;
        s.insert(to_string(x) + ";" + to_string(y));
        for (char c: path)
        {
            auto p = mp[c];
            x += p.first;
            y += p.second;
            if (s.find(to_string(x) + ";" + to_string(y)) != s.end())
            {
                return true;
            }
            s.insert(to_string(x) + ";" + to_string(y));
        }

        return false;
    }
};
