class Solution
{
    public int longestConsecutive(int[] nums)
    {
        Set<Integer> hashSet = new HashSet<>();
        List<Integer> l = new ArrayList<>();
        for (int num : nums)
        {
            hashSet.add(num);
        }
        int longest = 0;
        for (int num : hashSet)
        {
            if (! hashSet.contains(num - 1))
            {
                int len = 1;
                while (hashSet.contains(num + len))
                {
                    len++;
                }
                longest = Math.max(len, longest);
            }
        }

        return longest;
    }
}
