public class Solution {
    public int[] TopKFrequent(int[] nums, int k) {
        Dictionary<int,int> dict = new Dictionary<int, int>();
        foreach (var item in nums)
        {
            dict[item] = dict.GetValueOrDefault(item, 0)+1;
        }

        var a = dict.OrderByDescending(x=>x.Value).ToDictionary();
        var b = a.Keys.Take(k).ToArray();
        return b;
    }
}
