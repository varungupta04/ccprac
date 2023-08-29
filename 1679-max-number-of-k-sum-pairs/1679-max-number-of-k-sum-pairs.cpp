class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {

        int ans = 0;

        sort(nums.begin(), nums.end());

        int s = 0;
        int e = nums.size() - 1;

        while(s < e) {
            if(nums[s] + nums[e] == k) {
                ans++;
                s++;
                e--;
            }
            else if(nums[s] + nums[e] > k)
                e--;
            else 
                s++;
        }

        return ans;
        
    }
};