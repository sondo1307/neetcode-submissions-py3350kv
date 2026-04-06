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

            long long sqrt = m * m;
            if (sqrt > num) r = m - 1;
            else if (sqrt < num) l = m + 1;
            else return true;
        }
        
        return false;
    }
};