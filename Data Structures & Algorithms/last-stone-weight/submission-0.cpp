class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        priority_queue<int, vector<int>> maxHeap;
                for (auto i : stones)
        {
            maxHeap.push(i);
        }
        while (maxHeap.size() > 1)
        {
            auto max1 = maxHeap.top();
            maxHeap.pop();
            auto max2 = maxHeap.top();
            maxHeap.pop();
            maxHeap.push(abs(max1 - max2));
        }

        return maxHeap.top();
    }
};