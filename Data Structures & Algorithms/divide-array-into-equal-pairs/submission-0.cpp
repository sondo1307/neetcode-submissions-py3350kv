class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int arr[500] = {0};
        for (int i : nums)
        {
            arr[i] = (arr[i]+1) % 2;
        }
        int sum = 0;
        for (int i: arr)
        {
            sum+= i;
        }

        return sum == 0;
    }
};