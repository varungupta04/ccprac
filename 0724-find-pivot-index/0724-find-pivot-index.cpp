class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int element = -1;
        int cur_sum = 0;
        int total = 0;
        
        for(int i = 0; i<nums.size();i++)
        {
            total += nums[i];
        }
        
        for(int i = 0; i<nums.size();i++)
        {
            
            total -= nums[i];
            
            if(cur_sum == total)
            {
                element = i;
                break;
            
            }
            
            
            cur_sum += nums[i];

        }
        
        return element;
        
    }
};