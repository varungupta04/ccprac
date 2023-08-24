class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int ma = 0;
        vector<bool> lmao;
        for(int i: candies)
        {
            ma = max(ma,i);

        }
        
        for(int j: candies)
        {
            if((j + extraCandies)>=ma)
                lmao.push_back(true);
            else
                lmao.push_back(false);

        }
        
        return lmao;
        
    }
};