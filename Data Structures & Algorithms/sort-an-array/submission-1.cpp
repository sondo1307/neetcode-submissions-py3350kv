class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        if (nums.size() < 2) return nums;

        vector<int> left;
        vector<int> right;
        int middleIndex = nums.size() / 2;
        for (int i = 0; i < middleIndex; i++)
        {
            left.push_back(nums[i]);
        }
        for (int i = middleIndex; i < nums.size(); i++)
        {
            right.push_back(nums[i]);
        }

        vector<int> sortedLeft = sortArray(left);
        vector<int> sortedRight = sortArray(right);
        return merge(sortedLeft, sortedRight);
    }

    vector<int> merge(vector<int> &left, vector<int> &right)
    {
        vector<int> result;
        int i = 0;
        int j = 0;
        while (i < left.size() && j < right.size())
        {
            if (left[i] < right[j])
            {
                result.push_back(left[i]);
                i++;
            }
            else
            {
                result.push_back(right[j]);
                j++;
            }
        }

        // Đẩy toàn bộ phần tử còn dư của mảng left vào result
        while (i < left.size()) {
            result.push_back(left[i++]);
        }

        // Đẩy toàn bộ phần tử còn dư của mảng right vào result
        while (j < right.size()) {
            result.push_back(right[j++]);
        }
        return result;
    }
};