class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int counter = 0;
        for (int i = 0; i < flowerbed.size(); ++i)
        {
            if (flowerbed[i] == 0)
            {
                if ((i - 1 >= 0 && flowerbed[i - 1] == 0 && i + 1 < flowerbed.size() && flowerbed[i + 1] == 0) 
                    || (i - 1 < 0 && flowerbed[i + 1] == 0)
                    || (i + 1 >= flowerbed.size() && flowerbed[i - 1] == 0))
                {
                    counter++;
                    flowerbed[i] = 1;
                }
            }
        }

        return counter >= n;
    }
};