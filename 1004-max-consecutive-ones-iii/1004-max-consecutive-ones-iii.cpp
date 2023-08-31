class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int counter = 0;
        int longest = 0;
        int n = nums.size() ;
        
        
        for(int right = 0 ;right<n;right++)
        {
            if(nums[right]  == 0)
            {
                counter++;
            }
            
            while(counter>k)
            {
               if(nums[left] == 0)
               {
                   counter--;
               }
                left++;
            
            }
            
            longest = max(longest,(right-left+1));
        
        }
        
        return longest;
        
        
    }
};