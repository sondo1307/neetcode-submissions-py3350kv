class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        long long l = 0;
        long long r = num;
        while (l <= r)
        {
            long long m = l + (r - l) / 2;
            long long sqr = m * m;
            if (sqr == num) return true;
            else if (sqr < num) l = m + 1;
            else if (sqr > num) r = m - 1;
        }

        return false;
    }
};