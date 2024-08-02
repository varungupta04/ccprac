class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return ""; // Handle the empty input case

        // Sort the strings
        sort(strs.begin(), strs.end());
        
        // After sorting, compare the first and last string
        string a = strs[0];
        string b = strs[strs.size() - 1];
        string ans = "";

        // Compare characters of the first and last string
        for (int i = 0; i < a.length(); i++) {
            if (a[i] == b[i]) {
                ans += a[i];
            } else {
                break; // Stop when characters don't match
            }
        }

        return ans;
    }
};