public class Solution {
    public bool hasDuplicate(int[] nums) {
        Dictionary<int, int> dict = new Dictionary<int, int>();
        var currentTotal = 0;
        for(int i = 0; i < nums.Length; i++)
        {
            var numsI = nums[i];
            if(dict.ContainsKey(numsI))
            {
                dict[numsI]++;
            }
            else
            {
                dict.Add(numsI, 1);
            }
            currentTotal+= dict[numsI];
            if(currentTotal > nums.Length) return true;
        }

        return false;
    }
}