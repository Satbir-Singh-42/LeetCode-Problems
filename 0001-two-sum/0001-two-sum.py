class Solution(object):
    def twoSum(self, nums, target):
        d = {}
        # First pass: store each number's index
        for i in range(len(nums)):
            d[nums[i]] = i
        
        # Second pass: find the complement
        for i in range(len(nums)):
            x = target - nums[i]
            if x in d and i!=d[x]:
                return [i,d[x]]
        return None

