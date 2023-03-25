class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top = 0 , left = 0 ;
        int bot = matrix.size() - 1 , right = matrix[0].size()-1;
        int n = matrix.size() , m = matrix[0].size();
        vector<int>ans;
        int cnt = 0 ;
        while( ans.size() < n*m)
        {
            cnt++;
            if( left <= right)
            {
                for(int i = left ;i<= right ;i++ )
                {
                    ans.push_back( matrix[top][i]);
                }
                top++;

            }
            if( top <= bot and ans.size() < n*m )
            {
                 for(int i = top ;i<=bot ;i++ )
                {
                    ans.push_back( matrix[i][right]);
                }
                right--;

            }

            if( right >= left and ans.size() < n*m ) 
            {
                for(int i = right ;i>=left ;i-- )
                {
                    ans.push_back( matrix[bot][i]);

                }
                bot--;

            }
            if( bot >= top and ans.size() < n*m)
            {
                for(int i = bot ;i>= top ;i--)
                {
                    ans.push_back(matrix[i][left]);
                }

                left++;

            }
          
        }
        cout<<cnt;
        return ans;

    }
};