public class Solution {
    public int[] TwoSum(int[] nums, int target) {
// Key: The number, Value: Its index
    var map = new Dictionary<int, int>();

    for (int i = 0; i < nums.Length; i++) {
        int complement = target - nums[i];

        if (map.ContainsKey(complement)) {
            return new int[] { map[complement], i };
        }

        // Add the current number and index to the map
        // (Use TryAdd or check ContainsKey to handle duplicates if necessary)
        map[nums[i]] = i;
    }

    return Array.Empty<int>();
    }
}
