class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        myDict = {}
        for i in range (len(s)):
            myDict[s[i]] = myDict.get(s[i], 0) + 1
        for j in range (len(t)):
            myDict[t[j]] = myDict.get(t[j], 0) - 1
        for char, num in myDict.items():
            if not (num == 0):
                return False
        return True