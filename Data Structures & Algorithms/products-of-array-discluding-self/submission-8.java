class Solution
{
    public int[] productExceptSelf(int[] nums)
    {
        int[] arr = new int[nums.length];
        Arrays.fill(arr, 1);
        for (int i = 0; i < nums.length; i++)
        {
            for (int j = 0; j < i; j++)
            {
                arr[i] *= nums[j];
            }
            for (int j = i + 1; j < nums.length; j++)
            {
                arr[i] *= nums[j];
            }
        }

        return arr;
    }
}