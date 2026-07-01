class Solution:
    def maximumDifference(self, nums: List[int]) -> int:
        max_diff=-1
        for i in range(len(nums)):
            for j in range(i + 1, len(nums)):
                if nums[i] < nums[j]:
                    if max_diff<nums[j] - nums[i]:
                        max_diff=nums[j] - nums[i]


        return max_diff