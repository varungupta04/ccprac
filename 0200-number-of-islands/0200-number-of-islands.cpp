class Solution {
public:

    void dfs(vector<vector<char>> &grid, int i , int j)
    {
        int n = grid.size();
        int m = grid[0].size();

        //check boundary and if it is 1
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j] != '1')
        {
            return;
        }

        //if it is one then put a dollar as it visited now
        grid[i][j] = '$';

        dfs(grid, i+1, j);
        dfs(grid, i-1, j);
        dfs(grid, i, j+1);
        dfs(grid, i, j-1);
    }


    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty())
        {return 0;}

        int n = grid.size();
        int m = grid[0].size();
        int count = 0;


        //traverse the entire grid for checking the first one and do dfs from that 
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                if(grid[i][j] == '1')
                {
                    dfs(grid, i, j);
                    count++;
                }
            }
        }

        return count;
    }
};