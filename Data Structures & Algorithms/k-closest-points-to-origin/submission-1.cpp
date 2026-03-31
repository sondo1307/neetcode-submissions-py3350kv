struct ComparePoints
{
    // Lưu ý: Để làm Min-Heap, ta dùng dấu '>'
    bool operator()(const vector<int> &a, const vector<int> &b)
    {
        return (a[0] * a[0] + a[1] * a[1]) > (b[0] * b[0] + b[1] * b[1]);
    }
};

class Solution
{
public:
    vector<vector<int> > kClosest(vector<vector<int> > &points, int K)
    {
        // auto comp = [](const vector<int>& a, const vector<int>& b) {
        //     return a[0]*a[0] + a[1]*a[1] > b[0]*b[0] + b[1]*b[1];
        // };
        // Truyền trực tiếp tên Struct vào tham số template thứ 3

        priority_queue<vector<int>, vector<vector<int> >, ComparePoints> minHeap;

        for (const auto &point: points)
        {
            minHeap.push({point[0], point[1]});
        }

        vector<vector<int> > result;
        for (int i = 0; i < K; ++i)
        {
            result.push_back(minHeap.top());
            minHeap.pop();
        }
        return result;
    }
};