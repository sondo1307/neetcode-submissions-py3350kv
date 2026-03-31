class Solution
{
public:
    int trap(vector<int> &height)
    {
        int l = 0;
        int r = height.size() - 1;
        int maxL = height[l];
        int maxR = height[r];
        vector<int> arr(height.size(), 0);
        while (l < r)
        {
            if (maxL < maxR)
            {
                l++;
                maxL = max(maxL, height[l]);
                arr[l] = max(maxL - height[l], 0);
            }
            else
            {
                r--;
                maxR = max(maxR, height[r]);
                arr[r] = max(maxR - height[r], 0);
            }
        }

        int sum = 0;
        for (int const &i: arr)
        {
            sum += i;
            cout << i << endl;
        }

        return sum;
    }
};