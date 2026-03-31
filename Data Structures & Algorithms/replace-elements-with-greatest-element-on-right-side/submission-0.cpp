class Solution
{
public:
    vector<int> replaceElements(vector<int> &arr)
    {
        int maxSuff = -1;
        for (int i = arr.size() - 1; i >= 0; i--)
        {
            auto temp = arr[i];
            arr[i] = maxSuff;
            maxSuff = max(maxSuff, temp);
        }
        
        return arr;
    }
};