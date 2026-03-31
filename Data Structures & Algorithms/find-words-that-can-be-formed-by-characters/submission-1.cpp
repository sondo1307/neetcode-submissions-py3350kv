class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int mainCount[26] = {0};
        for (char c : chars) mainCount[c - 'a']++;

        int totalLength = 0;
        for (const string& w : words) {
            int wordCount[26] = {0};
            bool canForm = true;
            
            // Đếm tần suất các chữ cái trong từ hiện tại
            for (char c : w) {
                int index = c - 'a';
                wordCount[index]++;
                // Nếu vượt quá số lượng cho phép, dừng luôn
                if (wordCount[index] > mainCount[index]) {
                    canForm = false;
                    break;
                }
            }
            
            if (canForm) {
                totalLength += w.length();
            }
        }

        return totalLength;
    }
};