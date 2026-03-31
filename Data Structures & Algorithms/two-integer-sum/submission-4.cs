public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        int[] a = new int[2];

        for (int i = 0; i < nums.Length; i++)
        {
            var substract = target - nums[i];
            var skip = i+1;
            if(nums.Skip(skip).Contains(substract))
            {
                a[0] = i;
                a[1] = Array.IndexOf(nums, substract,skip);
                break;
            }
        }
        Array.Sort(a);
        return a;
    }
}
