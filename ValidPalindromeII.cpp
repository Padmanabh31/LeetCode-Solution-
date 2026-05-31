/*

Topic: String
Problem No. :- 680
problem statement :-  Valid Palindrome II

Link: https://leetcode.com/problems/valid-palindrome-ii/
Difficulty: medium

*/
class Solution {
public:
    bool checkPalindrome(const string& s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;

        while (i < j) {
            if (s[i] != s[j]) {
                return checkPalindrome(s, i + 1, j) ||
                       checkPalindrome(s, i, j - 1);
            }

            i++;
            j--;
        }

        return true;
    }
};
