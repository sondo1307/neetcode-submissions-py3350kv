class Solution
{
public:
    int maxScore(string s)
    {
        vector<int> v(s.size() - 1, 0);

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;

        // counting zero
        int countZero = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == '0')
            {
                countZero++;
            }
            v[i] = countZero;
        }

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }

        int countOne = s[s.size() - 1] - '0';
        for (int i = s.length() - 2; i >= 0; i--)
        {
            v[i] += countOne;

            if (s[i] == '1')
            {
                countOne++;
            }
        }

        return *max_element(v.begin(), v.end());
    }
};