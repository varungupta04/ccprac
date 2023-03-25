class Solution {
public:
    vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        nums1.resize(m);
        
        for(int i = 0; i< n; i++)
        {
            if(n==0)
            break;
            nums1.push_back(nums2[i]);
        }
        
        sort(nums1.begin(),nums1.end());
        
        return nums1;
    }
};