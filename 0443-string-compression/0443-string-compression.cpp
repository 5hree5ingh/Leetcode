class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 1, ans = 0;
        for (int i = 0; i < chars.size(); i++) {
            int j = 1;
            for (; i + j < chars.size() && chars[i + j - 1] == chars[i + j]; j++) {
                count++;
            }
            chars[ans++] = chars[i];
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[ans++] = c;
                }
            }
            count = 1;
            i += (j - 1);
        }
        return ans;
    }
};
