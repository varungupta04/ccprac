class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string st = "";
        sort(strs.begin(),strs.end());
        int a = strs.size();
        string n = strs[0];
        string m = strs[a-1];
        for(int i=0;i<n.size();i++)
        {
          if(n[i]==m[i])
          {st += n[i];}
          else
          { break; }
        }
        return st;
    }
    
};