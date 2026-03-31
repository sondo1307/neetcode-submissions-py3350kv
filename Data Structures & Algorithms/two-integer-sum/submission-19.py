class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        myDict = {}
        for i in range(len(nums)):
            sub = target - nums[i]
            if sub in myDict.keys():
                return [myDict[sub], i]
            myDict[nums[i]] = i 
        return []