public class Solution {
    public int[] TwoSum(int[] numbers, int target)
    {
        Array.Sort(numbers);
        int l = 0;
        int r = numbers.Length - 1;
        while (l<r)
        {
            var sum = numbers[l] + numbers[r];
            if (sum > target)
            {
                r--;
            }
            else if (sum < target)
            {
                l++;
            }
            else
            {
                return new[] { l+1, r+1 };
            }
        }

        return Array.Empty<int>();
    }
}