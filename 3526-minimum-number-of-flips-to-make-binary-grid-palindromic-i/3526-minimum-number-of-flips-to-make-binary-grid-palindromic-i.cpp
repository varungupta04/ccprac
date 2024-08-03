#include <vector>
using namespace std;

class Solution {
public:
    int minFlipsToPalindromic(const vector<int>& line) 
    {
        int count = 0;
        int l = 0, r = line.size() - 1;
        while (l < r) {
            if (line[l] != line[r]) {
            count++;
        }
        l++;
        r--;
    }
    return count;
    }

    int minFlips(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int rowFlips = 0, colFlips = 0;

        // Calculate flips needed for all rows
        for (int i = 0; i < m; ++i) {
            rowFlips += minFlipsToPalindromic(grid[i]);
        }

        // Calculate flips needed for all columns
        for (int j = 0; j < n; ++j) {
            vector<int> column;
            for (int i = 0; i < m; ++i) {
                column.push_back(grid[i][j]);
            }
            colFlips += minFlipsToPalindromic(column);
        }

        return min(rowFlips, colFlips);
    }
};