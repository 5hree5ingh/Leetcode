class Solution {
public:
    array<int, 256> hash(string s){
        array<int, 256> arr={0};
        for(int i=0;i<s.size();i++){arr[s[i]]++;}
        return arr;}
        
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<array<int,256>,vector<string>>mp;
        for(int i=0;i<strs.size();i++){mp[hash(strs[i])].push_back(strs[i]);}
         vector<vector<string>> ans;
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            ans.push_back(it->second);}
        return ans;
}};