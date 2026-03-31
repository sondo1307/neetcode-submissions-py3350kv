class Solution
{
    public int[] twoSum(int[] nums, int target)
    {
        Map<Integer, Integer> dict = new HashMap<Integer, Integer>();
        for (int i = 0; i < nums.length; i++)
        {
            var sub = target - nums[i];
            if (dict.containsKey(sub))
            {
                return new int[]{dict.get(sub), i};
            }
            dict.put(nums[i], i);
        }

        return new int[]{};
    }
}