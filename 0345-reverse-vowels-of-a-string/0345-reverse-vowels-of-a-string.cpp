class Solution {
public:
    string reverseVowels(string s) {
        string vowels="aeiou";
        int start=0,end=s.length()-1;
        for(int i=0;start<end;i++){
            if(vowels.find(tolower(s[start]))==string::npos){
                start++;
            }
            else if(vowels.find(tolower(s[end]))==string::npos){
                end--;
            }
            else{swap(s[start],s[end]);start++;end--;}
        }
        return s;
    }
};