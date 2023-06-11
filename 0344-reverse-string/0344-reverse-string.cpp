class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        reverse(s.begin(),s.begin()+n);
    }
};