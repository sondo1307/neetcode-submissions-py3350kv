class Solution
{
public:
    bool isHappy(int n)
    {
        unordered_set<int> us;
        while (n != 1)
        {
            vector<int> v;
            auto temp = n;
            while (temp > 0)
            {
                v.push_back(temp % 10); // Lấy số cuối
                temp /= 10; // Bỏ số cuối
            }

            int sum = 0;
            for (auto i: v) sum += pow(i, 2);
            n = sum;
            if (us.find(n) != us.end()) return false;
            us.insert(n);
            cout << n << endl;
        }

        return true;
    }
};