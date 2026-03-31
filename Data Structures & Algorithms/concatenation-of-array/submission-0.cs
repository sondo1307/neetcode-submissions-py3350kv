public class Solution {
    public int[] GetConcatenation(int[] nums) {
                List<int> newList = new List<int>(nums);
        foreach (var VARIABLE in nums)
        {
            newList.Add(VARIABLE);
        }
        
        return newList.ToArray();
    }
}