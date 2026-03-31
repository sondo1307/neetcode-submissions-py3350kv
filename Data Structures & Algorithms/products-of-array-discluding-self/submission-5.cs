public class Solution
{
    public int[] ProductExceptSelf(int[] nums)
    {
        var newArr = new int[nums.Length];
        newArr[0]= 1;

        for (int i = 1; i < nums.Length; i++)
        {
            newArr[i] = nums[i - 1] * newArr[i - 1];
        }

        var suff = 1;
        for (int i = nums.Length - 2; i >= 0; i--)
        {
            suff *= nums[i + 1];
            newArr[i] *= suff;
        }
        
        return newArr;
    }
}