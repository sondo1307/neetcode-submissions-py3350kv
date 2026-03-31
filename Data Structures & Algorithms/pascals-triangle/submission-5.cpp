class Solution
{
public:
    vector<vector<int> > generate(int numRows)
    {
        vector<vector<int> > result;
        result.push_back({1});
        for (int i = 1; i < numRows; i++)
        {
            int l = i - 1;
            vector<int> row;
            row.push_back(1);
            for (int j = 0; j < l; j++)
            {
                row.push_back(result[i - 1][j] + result[i - 1][j + 1]);
            }
            row.push_back(1);
            result.push_back(row);
        }

        return result;
    }
};