class Solution:
    def isMonotonic(self, nums: List[int]) -> bool:
        a = nums.copy()
        b = nums.copy()
        a.sort()
        b.sort(reverse=True)
        print(a,b,nums)
        return a==nums or b==nums