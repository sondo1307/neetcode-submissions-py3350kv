class Solution
{
    public int[] topKFrequent(int[] nums, int k)
    {
        HashMap<Integer, Integer> dict = new HashMap<Integer, Integer>();
        List<Integer>[] arr = new List[nums.length + 1];

        for (int i = 0; i < arr.length; i++)
        {
            arr[i] = new ArrayList<>();
        }
        for (int i = 0; i < nums.length; i++)
        {
            dict.put(nums[i], dict.getOrDefault(nums[i], 0) + 1);
        }
        for (Map.Entry<Integer, Integer> entry : dict.entrySet())
        {
            arr[entry.getValue()].addLast(entry.getKey());
        }
        int[] res = new int[k];
        int count = 0;
        for (int i = arr.length - 1; i >= 0 && count < k; i--)
        {
            for (int n: arr[i])
            {
                res[count] = n;
                count++;
                if (count == k) return res;
            }
        }

        return res;
    }
}