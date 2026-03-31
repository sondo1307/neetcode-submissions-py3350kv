class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        if (nums.empty()) return 0;

        int l = 1; // l đóng vai trò là "con trỏ ghi" (vị trí sẽ được thay thế)
        int r = 1; // r đóng vai trò là "con trỏ tìm kiếm"

        while (r < nums.size()) {
            // Nếu tìm thấy một số mới (lớn hơn số đã chốt ở ngay trước l)
            if (nums[r] > nums[l - 1]) {
                // Đưa số mới đó về vị trí l
                nums[l] = nums[r];
                
                // In ra để debug giống như bạn muốn trong CLion
                // cout << "Ghi so " << nums[r] << " vao index " << l << endl;
                
                l++; // Tăng vị trí ghi tiếp theo
            }
            
            // Luôn luôn tăng r để tìm kiếm tiếp
            r++;
        }

        // NeetCode yêu cầu trả về số lượng phần tử duy nhất
        return l; 
    }
};