class Solution {
public:
    bool isAnagram(string s, string t) {
        
        bool flag = false;
        
        int n = s.length();
        int m = t.length();
        
        if(n != m)
        {
            return flag;
        }
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        if(s==t)
        {
             flag = true;
        }
        
        return flag;
    }
};