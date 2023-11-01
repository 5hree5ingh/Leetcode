class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            // Odd-length palindromes
            for (int x = i, y = i; x >= 0 && y < s.length() && s[x] == s[y]; x--, y++) {
                count++;
            }

            // Even-length palindromes
            for (int x = i, y = i + 1; x >= 0 && y < s.length() && s[x] == s[y]; x--, y++) {
                count++;
            }
        }
        return count;
    }
};