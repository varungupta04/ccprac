class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        ans = []
        x = 2
        for i in range(2):
            ans.extend(nums)

        return ans