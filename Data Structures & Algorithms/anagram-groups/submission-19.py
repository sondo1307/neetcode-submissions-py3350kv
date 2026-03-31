class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        my_dict = dict()
        for s in strs:
            arr = [0] * 26
            for c in s:
                arr[ord(c) - ord('a')] += 1
            key = ",".join(map(str, arr))
            if key not in my_dict:
                my_dict[key] = []
            my_dict[key].append(s)
        return list(my_dict.values())