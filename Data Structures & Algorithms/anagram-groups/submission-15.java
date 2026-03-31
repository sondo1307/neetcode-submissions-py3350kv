class Solution
{
    public List<List<String>> groupAnagrams(String[] strs)
    {
        HashMap<String, List<String>> dict = new HashMap<>();
        for (String str : strs)
        {
            int[] arr = new int[26];
            for (char c : str.toCharArray())
            {
                arr[c - 'a']++;
            }
            String key = Arrays.toString(arr);
            if (! dict.containsKey(key))
            {                
                dict.put(key, new ArrayList<>());
            }
            dict.get(key).add(str);
        }
        return dict.values().stream().toList();
    }
}