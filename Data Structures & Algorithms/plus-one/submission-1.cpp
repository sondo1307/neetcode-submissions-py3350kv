class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                // Gặp số < 9 thì cộng xong là xong, return luôn
                return digits; 
            }
            // Nếu là 9 thì biến thành 0 và vòng lặp tiếp tục chạy sang trái
            digits[i] = 0;
        }
        
        // Nếu thoát khỏi vòng lặp mà chưa return, nghĩa là toàn bộ là số 9 (99, 999...)
        // Lúc này mảng đang là [0, 0, 0...], ta chỉ cần chèn 1 vào đầu
        digits.insert(digits.begin(), 1);
        return digits;
    }
};