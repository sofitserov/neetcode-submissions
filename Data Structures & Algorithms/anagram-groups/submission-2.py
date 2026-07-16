class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        out = []
        myDict = {};
        for i in range (len(strs)):
            temp = "".join(sorted(strs[i]))
            myDict.setdefault(temp, []).append(strs[i])
        for key, value in myDict.items():
            out.append(value)
        return out
