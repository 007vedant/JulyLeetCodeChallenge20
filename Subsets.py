class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        subsets = [[]]
        x = len(nums)
        for i in range(1, 1 << x):
            sub = [nums[j] for j in range(x) if (i & (1 << j))]
            subsets.append(sub)
        
        return subsets
        