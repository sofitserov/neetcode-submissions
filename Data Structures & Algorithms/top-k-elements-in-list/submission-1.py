class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        myDict = {}
        out = []
        for i in range (len(nums)):
            myDict.setdefault(nums[i], 0)
            myDict[nums[i]]+=1
        for i in range (k):
            max = 0
            maxKey = 0
            for key, value in myDict.items():
                if value > max:
                    max = value
                    maxKey = key
            out.append(maxKey)
            myDict.pop(maxKey)
        return out
        