class Solution {
public:
    int strStr(string haystack, string needle) {
        bool found=false;
        int index=0;
        for(int i=0;i<haystack.length();i++){
            if(haystack[i]==needle[0]){
                int k=i,j=0;
                index=i;
                for(j=0;j<needle.length();j++){
                    if(haystack[k]!=needle[j]){
                        break;
                    }
                    k++;
                }
                if(j==needle.length()){
                    found=true;
                    break;
                }
            }
        }
        return found==true?index:-1;
    }
};