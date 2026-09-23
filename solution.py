class Solution:
    def countElements(self, nums: list[int]) -> int:
        mx = nums[0]
        mi = nums[0]
        for n in nums:
            mx = max(mx, n)
            mi = min(mi, n)
        
        ret = 0
        for n in nums:
            if n > mi and n < mx:
                ret += 1
        
        return ret
