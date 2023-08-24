class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        int j;
        int count;
        bool lm = false;
        
        
        
        if(n>m)
        {
             j = m;
            count = n-m;
            
            
        }
        else
        {j = n;
         count = m-n;
         lm = true;
        }
        
        
        
        string word3;
        
        for(int i = 0;i<j;i++)
        {     
            word3 += word1[i];
            word3 += word2[i];
                
        }
        
        
        if(lm)
        {
            for(int i = 0;i<count;i++)
        {     
            word3 += word1[n+i];                
        }

        }
        
        else
        {
            
            for(int i = 0;i<count;i++)
        {     
            word3 += word2[m+i];                
        }

        }
        
        
        return word3;
        
        
    }
};