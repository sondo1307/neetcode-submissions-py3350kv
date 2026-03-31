public class Solution {
    public int MajorityElement(int[] nums) {
        var count = 0;
        var res = nums[0];
        for (int i = 0; i < nums.Length; i++)
        {
            if (nums[i] == res)
            {
                count++;
            }
            else
            {
                count--;
            }

            if (count == 0 && res != nums[i])
            {
                res = nums[i];
                count++;
            }
        }

        return res;
    }
}