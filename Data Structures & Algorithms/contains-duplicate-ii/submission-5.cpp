class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> s;
        for (int i = 0; i < nums.size(); i++) {
            // 1. Kiểm tra xem số hiện tại đã xuất hiện trong khoảng k chưa
            if (s.find(nums[i]) != s.end()) return true;
            
            // 2. Thêm số hiện tại vào set
            s.insert(nums[i]);
            
            // 3. Nếu kích thước set vượt quá k, xóa phần tử xa nhất (bên trái)
            if (s.size() > k) {
                s.erase(nums[i - k]);
            }
        }
        return false;
    }
};