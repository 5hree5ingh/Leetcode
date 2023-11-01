class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // if(s!=t){return false;}
        // return true;

        int count[256]={0};
        for(int i=0;i<s.length() || i<t.length();i++){
            count[s[i]]++;
            count[t[i]]--;
        }
        for(int i=0;i<256;i++){
            if(count[i]!=0){return false;}
        }
        return true;
    }
};