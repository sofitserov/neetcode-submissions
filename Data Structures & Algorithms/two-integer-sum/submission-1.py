class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        myDict = {}
        for i in range(len(nums)):
            difference = target - nums[i]
            idx = myDict.get(difference, -1)
            if idx == -1:
                myDict[nums[i]] = i
            else:
                myList = [idx, i]
                return myList

        