class Solution {
public:
    string longestCommonPrefix(vector<string> &str)
{
    string prefix = "";
    if (str.empty())
    {
        return prefix;
    }

    for (int i = 0; i < str[0].length(); i++)
    {
        char currentChar = str[0][i];
        for (int j = 1; j < str.size(); j++)
        {
            if (i >= str[j].length() || str[j][i] != currentChar)
            {
                return prefix;
            }
        }
        prefix.push_back(currentChar);
    }
    return prefix;
}
};