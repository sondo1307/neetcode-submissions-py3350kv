class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        bucket1 = [0] * 26
        bucket2 = [0] * 26
        for c in s:
            bucket1[ord(c) - ord('a')]+=1
        for c in t:
            bucket2[ord(c) - ord('a')]+=1
        for i in range(0, 26):
            if bucket1[i] != bucket2[i]: return False
        return True