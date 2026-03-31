public class Solution {
    public bool hasDuplicate(int[] nums) {
        Dictionary<int, int> dict = new Dictionary<int, int>();
        for(int i = 0; i < nums.Length; i++)
        {
            var numsI = nums[i];
            if(dict.ContainsKey(numsI))
            {
                return true;
            }
            else
            {
                dict.Add(numsI, 1);
            }
        }

        return false;
    }
}