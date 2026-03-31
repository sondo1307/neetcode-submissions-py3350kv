class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        priority_queue<int, vector<int>> maxPQ;
        for (auto i : nums)
        {
            maxPQ.push(i);
        }
        for (int i = 1; i < k; i++)
        {
            maxPQ.pop();
        }

        return maxPQ.top();
    }
};