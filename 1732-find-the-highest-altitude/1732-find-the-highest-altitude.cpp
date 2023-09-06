class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = 0;
        int alt = 0;
        
        for(int i=0;i<gain.size();i++)
        {
            alt += gain[i];
            ans = max(ans,alt);

        }
        
        return ans;
        
    }
};