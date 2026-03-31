class Solution
{
public:
    int countCharacters(vector<string> &words, string chars)
    {
        int arr[26] = {0};
        for (auto c: chars) arr[c - 'a']++;
        int count = 0;
        for (auto w: words)
        {
            vector<int> v(arr, arr + 26);
            int tc = 0;
            for (auto c: w)
            {
                v[c - 'a']--;
                tc++;
                if (v[c - 'a'] < 0)
                {
                    tc = 0;
                    cout << w << endl;
                    break;
                }
            }
            count += tc;
        }

        return count;
    }
};