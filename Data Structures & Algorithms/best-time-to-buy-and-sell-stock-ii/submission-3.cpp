class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int l = 0;
        int r = l + 1;
        int profit = 0;
        while (r < prices.size())
        {
            if (prices[l] >= prices[r])
            {
                l++;
                r++;
            }
            else
            {
                while (r < prices.size() - 1 && prices[r] <= prices[r + 1])
                {
                    r++;
                }
                profit += (prices[r] - prices[l]);
                l += (r - l + 1);
                r = l + 1;
            }
        }

        return profit;
    }
};