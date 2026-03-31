public class Solution {
    public bool IsAnagram(string s, string t) {
        var merge = s + t;
        Dictionary<char, int> dict = new Dictionary<char, int>();
        for (int i = 0; i < merge.Length; i++)
        {
            var temp = merge[i];
            if(dict.ContainsKey(temp))
            {
                dict[temp]++;
            }
            else
            {
                dict.Add(temp, 1);
            }
        }
        foreach (var item in dict)
        {
            if (item.Value %2 !=0 || !s.Contains(item.Key) || !t.Contains(item.Key))
            {
                return false;   
            }   
        }

        return true;
    }
}
