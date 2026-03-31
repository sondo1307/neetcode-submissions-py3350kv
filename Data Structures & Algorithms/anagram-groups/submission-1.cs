public class Solution {
    public bool CheckAnagram(string s, string t)
    {
        if (s.Length != t.Length) {
            return false;
        }

        Dictionary<char, int> countS = new Dictionary<char, int>();
        Dictionary<char, int> countT = new Dictionary<char, int>();
        for (int i = 0; i < s.Length; i++) {
            countS[s[i]] = countS.GetValueOrDefault(s[i], 0) + 1;
            countT[t[i]] = countT.GetValueOrDefault(t[i], 0) + 1;
        }
        return countS.Count == countT.Count && !countS.Except(countT).Any();
    }

    public List<List<string>> GroupAnagrams(string[] strs) {
        var resultlist = new List<List<string>>();
        var tempList = strs.ToList();
        while (tempList.Count > 0)
        {
            var currentItem = tempList[0];
            if (resultlist.Count < 1)
            {
                resultlist.Add(new List<string>() { currentItem });
                tempList.Remove(currentItem);
                continue;
            }
            bool a = false;
            for (int j = 0; j < resultlist.Count; j++)
            {
                if (CheckAnagram(resultlist[j][0], currentItem))
                {
                    resultlist[j].Add(currentItem);
                    tempList.Remove(currentItem);
                    a = true;
                    break;
                }
            }
            if (!a)
            {
                resultlist.Add(new List<string>() { currentItem });
                tempList.Remove(currentItem);
            }
        }

        return resultlist;
    }
}
