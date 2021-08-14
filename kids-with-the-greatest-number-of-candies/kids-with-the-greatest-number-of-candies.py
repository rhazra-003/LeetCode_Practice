class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        max_ = max(candies) - extraCandies
        return [x >= max_ for x in candies]