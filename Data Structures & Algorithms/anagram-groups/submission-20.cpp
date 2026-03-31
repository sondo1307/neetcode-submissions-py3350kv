class Solution
{
public:
    vector<vector<string> > groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string> > dict;
        for (auto str: strs)
        {
            int arr[26] = {0};
            for (auto c: str)
            {
                arr[c - 'a']++;
            }
            stringstream key;
            for (int arr1: arr)
            {
                key << arr1 << ",";
            }
            dict[key.str()].push_back(str);
        }

        vector<vector<string>> groupStrings;
        for (auto str: dict)
        {
            groupStrings.push_back(str.second);
        }

        return groupStrings;
    }
};