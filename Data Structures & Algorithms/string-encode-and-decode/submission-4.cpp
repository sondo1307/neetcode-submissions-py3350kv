class Solution {
public:
    string encode(vector<string>& strs) {
        string result = "";
        for (const string& s : strs) {
            // Cấu trúc: [độ dài] + # + [chuỗi]
            result += to_string(s.length()) + "#" + s;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while (i < s.length()) {
            // 1. Tìm vị trí dấu # để biết độ dài chuỗi nằm ở đâu
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            
            // 2. Lấy độ dài chuỗi (nằm giữa i và j)
            int len = stoi(s.substr(i, j - i));
            
            // 3. Nhảy i đến vị trí bắt đầu của chuỗi thực tế (sau dấu #)
            i = j + 1;
            
            // 4. Cắt chuỗi dựa trên độ dài đã biết
            res.push_back(s.substr(i, len));
            
            // 5. Nhảy i đến chuỗi tiếp theo
            i += len;
        }
        return res;
    }
};