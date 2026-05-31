/*
Topic: String
Problem :  Valid Palindrome
Problem no. :- 125
Link: https://leetcode.com/problems/valid-palindrome/description/
Difficulty :- easy


*/

// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string a ;
//         int i =0 ; 
//         int j = s.length()-1 ; 
//         while (i <= j){
//             if (s[i]!=s[j]){
//                 return false ;

//             }
//             else {
//                 i++;
//                 j-- ; 
//             }
//         }
//         return true ; 
//     }
// };


// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string temp = "";

//         for (int i = 0; i < s.length(); i++) {
//             if (isalnum(s[i])) {
//                 temp.push_back(tolower(s[i]));
//             }
//         }

//         int i = 0;
//         int j = temp.length() - 1;

//         while (i < j) {
//             if (temp[i] != temp[j]) {
//                 return false;
//             }
//             i++;
//             j--;
//         }

//         return true;
//     }
// };


class Solution {
public:
    bool isValid(char ch) {
        return (ch >= 'a' && ch <= 'z') ||
               (ch >= 'A' && ch <= 'Z') ||
               (ch >= '0' && ch <= '9');
    }

    char toLowerCase(char ch) {
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch - 'A' + 'a';
        }
        return ch;
    }

    bool isPalindrome(string s) {
        string temp = "";

        for (int i = 0; i < s.length(); i++) {
            if (isValid(s[i])) {
                temp.push_back(toLowerCase(s[i]));
            }
        }

        int i = 0;
        int j = temp.length() - 1;

        while (i < j) {
            if (temp[i] != temp[j]) {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};
