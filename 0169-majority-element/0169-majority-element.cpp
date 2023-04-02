class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int k=nums.size()/2;
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        
        return nums[n/2];
        
    }
};