class Solution:
    def twoSum(self, nums, target):
        seen = {}
        for i, num in enumerate(nums):
            remainder = target - num
            if remainder in seen:
                return [seen[remainder], i]
            seen[num] = i
        return None
