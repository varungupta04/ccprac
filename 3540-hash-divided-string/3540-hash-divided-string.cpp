class Solution {
public:
    std::string stringHash(std::string s, int k) {
        int n = s.length();
        std::string result = "";


        for (int i = 0; i < n; i += k) {
            int sum = 0;


            for (int j = 0; j < k; ++j) {
                sum += s[i + j] - 'a';
            }


            int hashedChar = sum % 26;


            result += 'a' + hashedChar;
        }

        return result;
    }
};