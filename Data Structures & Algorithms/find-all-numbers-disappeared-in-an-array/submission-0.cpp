class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool> res;
        int len = nums.size();
        res.reserve(len);
        for (int i = 0; i< len; i++)
        {
            res[i] = false;
        }
        for (int i : nums){
            res[i-1] = true;
        }
        vector<int> real;
        for(int i = 0; i< len; i++)
        {
            if(!res[i])
            {
                real.push_back(i+1);
            }
        }

        return real;
    }
};