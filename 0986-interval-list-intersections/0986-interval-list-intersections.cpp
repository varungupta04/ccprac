class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> ans;
        int n = firstList.size();
        int m = secondList.size();
        int i = 0, j = 0;
        while (i < n && j < m) {
            if (firstList[i][1] >= secondList[j][0] && secondList[j][1] >= firstList[i][0]) {
                int start = max(firstList[i][0], secondList[j][0]);
                int end = min(firstList[i][1], secondList[j][1]);
                ans.push_back({start, end});
            }
            if (firstList[i][1] < secondList[j][1]) {
                i++;
            } else {
                j++;
            }
        }
        return ans;
    }
};
