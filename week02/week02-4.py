class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        diction = {}
        for i in s:
            if i in diction:
                diction[i] = diction[i] + 1
            else:
                diction[i] = 1