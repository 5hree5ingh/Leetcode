#include <vector>
#include <string>

class Solution {
public:
    string intToRoman(int num) {
        vector<int> arr;
        string ans;
        while (num != 0) {
            if (num >= 900 && num < 1000) {
                ans.push_back('C');
                ans.push_back('M');
                num -= 900;
            } else if (num >= 1000) {
                ans.push_back('M');
                num -= 1000;
            } else if (num >= 400 && num < 500) {
                ans.push_back('C');
                ans.push_back('D');
                num -= 400;
            } else if (num >= 500) {
                ans.push_back('D');
                num -= 500;
            } else if (num >= 90 && num < 100) {
                ans.push_back('X');
                ans.push_back('C');
                num -= 90;
            } else if (num >= 100) {
                ans.push_back('C');
                num -= 100;
            } else if (num >= 40 && num < 50) {
                ans.push_back('X');
                ans.push_back('L');
                num -= 40;
            } else if (num >= 50) {
                ans.push_back('L');
                num -= 50;
            } else if (num == 9) {
                ans.push_back('I');
                ans.push_back('X');
                num -= 9;
            } else if (num >= 10) {
                ans.push_back('X');
                num -= 10;
            } else if (num == 4) {
                ans.push_back('I');
                ans.push_back('V');
                num -= 4;
            } else if (num >= 5) {
                ans.push_back('V');
                num -= 5;
            } else if (num < 5) {
                while (num != 0) {
                    ans.push_back('I');
                    num--;
                }
            }
        }
        return ans;
    }
};
