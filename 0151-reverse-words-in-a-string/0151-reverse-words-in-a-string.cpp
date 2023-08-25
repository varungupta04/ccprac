class Solution {
public:
    string reverseWords(string s) {
        
        string ans = "";
        string temp = "";
        for(int i = s.size()-1; i>=0; i--){

            if(s[i] != ' '){
                temp = s[i] + temp;
            }
            else{
                while( i>=0   &&   s[i] == ' '){
                    i--;
                }

                if(i>=0 && temp.size()>0){
                    ans = ans + temp;
                    ans = ans + ' ';
                }

                if(i>=0){
                    temp = s[i];
                }
            }
        }

        if(temp.size() > 0 ){
            ans = ans + temp;
        }

        return ans;

    }
};