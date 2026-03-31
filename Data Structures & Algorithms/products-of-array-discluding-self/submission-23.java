class Solution
{
    public int[] productExceptSelf(int[] nums)
    {
        int[] arr = new int[nums.length];
        Arrays.fill(arr, 1);
        for (int i = 1; i < nums.length; i++)
        {
            arr[i] *= nums[i - 1] * arr[i - 1];
        }

        int prefix = 1;
        for (int i = nums.length - 2; i >= 0; i--)
        {
            prefix *= nums[i + 1];
            arr[i] *= prefix;
        }

        return arr;
    }
}