class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i = 0
        while i < len(nums):
            each = nums[i]
            if nums.count(each) > 2:
                nums.remove(each)
                i -= 1

            i += 1
        return len(nums)