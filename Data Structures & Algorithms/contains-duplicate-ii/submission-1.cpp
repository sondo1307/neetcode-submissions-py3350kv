class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> hSet;
        for(int i=0; i< nums.size(); i++)
        {
            if(hSet.find(nums[i]) != hSet.end()) return true;
            hSet.insert(nums[i]);
            if(hSet.size() > k) hSet.erase(nums[i-k]);
        }

        return false;
    }
};