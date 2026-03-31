class Solution
{
public:
    string largestGoodInteger(string num)
    {
        char maxDigit = '\0';

        for (int i = 0; i <= (int) num.length() - 3; ++i)
        {
            if (num[i] == num[i + 1] && num[i + 1] == num[i + 2])
            {
                if (num[i] > maxDigit)
                {
                    maxDigit = num[i];
                }
                i += 2;
            }
        }

        return (maxDigit == '\0') ? "" : string(3, maxDigit);
    }
};