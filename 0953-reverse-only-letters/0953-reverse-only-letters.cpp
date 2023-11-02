class Solution {
public:
    string reverseOnlyLetters(string s) {
        int start=0,end=s.length()-1;
        for(int i=0;start<end;i++){
            if(!isalpha(s[start])){start++;}
            if (!isalpha(s[end])){end--;}
            if(isalpha(s[start]) && isalpha(s[end])){
            swap(s[start],s[end]);
            start++;
            end--;}
}

        return s;
    }
};