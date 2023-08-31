class Solution {
public:
    bool isvowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
    
    int maxVowels(string s, int k) {
        int n = s.length();
        int cur_sum = 0;
        int maxx = 0;
        
        for (int i = 0; i < k; i++) {
            if (isvowel(s[i])) {
                cur_sum++;
            }
        }
        
       
        for (int i = k; i <= n; i++) {
            maxx = max(cur_sum, maxx); 
            
            if (i < n && isvowel(s[i])) {
                cur_sum++;
            }
            if (isvowel(s[i - k])) {
                cur_sum--;
            }
        }
        
        return maxx;
    }
};
