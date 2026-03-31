public class Solution {
    public int LongestConsecutive(int[] nums) {
        var hashSet = new HashSet<int>(nums);
        var longest = 0;
        foreach (var num in hashSet)
        {
            // make sure the starting number is the smallest number of the sub-array
            if(!hashSet.Contains(num-1))
            {
                var length = 1;
                // when finding num+1 => length + 1. When stop then length stop. => compare to last saved longest.
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
