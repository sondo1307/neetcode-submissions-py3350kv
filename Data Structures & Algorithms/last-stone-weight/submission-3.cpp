class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        priority_queue<int> maxHeap;
        for (auto i: stones)
        {
            maxHeap.push(i);
        }
        while (maxHeap.size() > 1)
        {
            auto top1 = maxHeap.top();
            maxHeap.pop();
            auto top2 = maxHeap.top();
            maxHeap.pop();
            auto sub = top1 - top2;
            if (sub > 0) maxHeap.push(sub);
        }

        return maxHeap.size() == 0 ? 0 : maxHeap.top();
    }
};