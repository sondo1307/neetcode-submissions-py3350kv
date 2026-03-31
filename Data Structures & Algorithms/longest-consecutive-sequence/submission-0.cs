public class Solution {
    public int LongestConsecutive(int[] nums) {
        var hashSet = new HashSet<int>(nums);
        var longest = 0;
        foreach (var num in hashSet)
        {
            if(!hashSet.Contains(num-1))
            {
                var length = 1;
                while(hashSet.Contains(num+length))
                {
                    length++;
                }
                longest = Math.Max(longest, length);
            }
        }

        return longest;
    }
}
