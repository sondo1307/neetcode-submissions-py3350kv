class Solution
{
public:
    long long pickGifts(vector<int> &gifts, int k)
    {
        priority_queue<int> maxHeap;
        for (auto i : gifts)
        {
            maxHeap.push(i);
        }
        while (k > 0)
        {
            int val = maxHeap.top();
            maxHeap.pop();
            maxHeap.push(sqrt(val));
            k--;
        }
        
        int res = 0;
        while (maxHeap.size() > 0)
        {
            int val = maxHeap.top();
            maxHeap.pop();
            res += val;
        }
        
        return res;
    }
};