class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string result = "";
        int index = 0;
        int minLen = strs[0].length();
        for (auto str: strs)
        {
            minLen = min(minLen, (int) str.length());
        }
        while (index < minLen) {
            char currentChar = strs[0][index]; // Lấy ký tự làm mẫu
            bool isSame = true;

            for (int i = 1; i < strs.size(); ++i) {
                if (strs[i][index] != currentChar) { // Chỉ cần so sánh, không cần set
                    isSame = false;
                    break;
                }
            }

            if (!isSame) break; // Nếu có một ký tự khác biệt, dừng lại ngay

            result.push_back(currentChar);
            index++;
        }

        return result;
    }
};