public class Solution {
    public int[] GetConcatenation(int[] nums) {
        int[] res = new int[nums.Length * 2];
        for(int i = 0; i< nums.Length; i++){
            res[i] = nums[i];
        }
        for(int i = 0; i< nums.Length; i++){
            res[nums.Length + i] = nums[i];
        }
        return res;
    }
}