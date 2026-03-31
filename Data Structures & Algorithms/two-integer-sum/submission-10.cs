public class Solution {
    public int[] TwoSum(int[] nums, int target)
    {
        Dictionary<int, int> dict = new Dictionary<int, int>(nums.Length);
        if (nums.Length == 2)
        {
            return [0, 1];
        }

        for (var i = 0; i < nums.Length; i++)
        {
            dict[nums[i]] = i; 
        }

        for (int i = 0; i < nums.Length; i++)
        {
            int sub = target - nums[i];
            if (dict.ContainsKey(sub) && dict[sub] != i)
            {
                return [i, dict[sub]];
            }
        }
        
        return [];
    }
}