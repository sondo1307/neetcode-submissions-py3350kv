class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int l = 1; // Con trỏ ghi: bắt đầu từ vị trí thứ 2
        
        for (int r = 1; r < nums.size(); r++) {
            // Nếu tìm thấy một phần tử mới khác với phần tử đứng trước nó
            if (nums[r] != nums[r - 1]) {
                nums[l] = nums[r]; // Ghi đè phần tử mới vào vị trí l
                l++; // Tăng con trỏ ghi
            }
        }

        return l; // Trả về số lượng phần tử duy nhất
    }
};