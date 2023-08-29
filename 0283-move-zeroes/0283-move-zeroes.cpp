class Solution {
public:
    vector<int> moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = n-1;
        int mid = 0;
        
        while(mid<=end)
        {
            if(nums[mid]!=0)
            {
                swap(nums[start],nums[mid]);
                start++;
            }
            mid++;
        }
        
        return nums;
        
    }
};