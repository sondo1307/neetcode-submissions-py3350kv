class Solution
{
public:
    string largestGoodInteger(string num)
    {
        string result = "";
        for (int i = 0, step = 1; i < num.length() - 2; i += step)
        {
        string temp = "";
            if (num[i] == num[i + 1] && num[i + 1] == num[i + 2])
            {
                temp += num[i];
                step = 3;
                if (result == "") result = temp;
                else
                {
                    int r = stoi(result);
                    int t = stoi(temp);
                    result = to_string(max(r, t));
                }
                continue;
            }
            step = 1;
        }
        cout << result <<endl;
        return result + result + result;
    }
};