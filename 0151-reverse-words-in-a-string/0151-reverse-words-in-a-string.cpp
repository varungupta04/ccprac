#include <string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int n = s.length();
        string ans = "";

        while (i < n) {
            while (i < n && s[i] == ' ') {
                i++;
            }
            
            string temp = "";
            while (i < n && s[i] != ' ') {
                temp += s[i];
                i++;
            }

            if (!temp.empty()) {
                if (ans.empty()) {
                    ans = temp;
                } else {
                    ans = temp + " " + ans;
                }
            }
        }
        
        return ans;
    }
};