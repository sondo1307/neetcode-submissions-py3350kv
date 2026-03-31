class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        // Cấp phát đủ bộ nhớ ngay từ đầu để tránh việc copy mảng nhiều lần
        result.reserve(word1.length() + word2.length()); 

        int i = 0;
        // Duyệt đến khi CẢ HAI chuỗi đều hết (i vượt qua độ dài của cả hai)
        while (i < word1.length() || i < word2.length()) {
            
            // Nếu word1 vẫn còn ký tự, thì lấy
            if (i < word1.length()) {
                result += word1[i];
            }
            
            // Nếu word2 vẫn còn ký tự, thì lấy
            if (i < word2.length()) {
                result += word2[i];
            }
            
            i++;
        }

        return result;
    }
};