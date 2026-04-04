class Solution
{
public:
    bool validWordAbbreviation(string word, string abbr)
    {
        int i = 0;
        int j = 0;
        int wLen = word.length();
        int aLen = abbr.length();
        while (i < wLen || j < aLen)
        {
            if (abbr[j] == '0') return false;
            if (isdigit(abbr[j]))
            {
                string k = "";
                while (j < aLen && isdigit(abbr[j]))
                {
                    k += abbr[j];
                    j++;
                }
                int intK = stoi(k);
                cout << intK << endl;
                i += intK;
                if (word[i] != abbr[j])
                {
                    cout << i << " " << j;
                    cout << endl;
                    cout << word[i] << " " << abbr[j] << endl;
                    return false;
                }
            }
            else
            {
                i++;
                j++;
            }
        }

        cout << i << " " << j;
        cout << endl;
        cout << word[i] << " " << abbr[j] << endl;
        return word[i] == abbr[j];
    }
};