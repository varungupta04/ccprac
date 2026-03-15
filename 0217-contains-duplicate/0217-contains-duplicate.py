class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        # nums.sort()
        # for i in range(len(nums)-1):
        #     if(nums[i] == nums[i+1]):
        #         return True
            
        # return False -> sorting takes up o(nlogn) so not the one to be used

        hash = set(nums)
        if len(hash) == len(nums):
            return False
        else:
            return True
