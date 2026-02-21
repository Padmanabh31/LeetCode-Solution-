/*
Topic: string 
Problem: 
Link: https://leetcode.com/problems/roman-to-integer/
Difficulty: Easy

*/
class Solution {
public:
    int romanToInt(string s) {
        int total = 0;

        for (int i = 0; i < s.size(); i++) {

            int value = 0;

            if (s[i] == 'I') value = 1;
            else if (s[i] == 'V') value = 5;
            else if (s[i] == 'X') value = 10;
            else if (s[i] == 'L') value = 50;
            else if (s[i] == 'C') value = 100;
            else if (s[i] == 'D') value = 500;
            else if (s[i] == 'M') value = 1000;

            // check next character
            if (i + 1 < s.size()) {

                int next = 0;

                if (s[i + 1] == 'I') next = 1;
                else if (s[i + 1] == 'V') next = 5;
                else if (s[i + 1] == 'X') next = 10;
                else if (s[i + 1] == 'L') next = 50;
                else if (s[i + 1] == 'C') next = 100;
                else if (s[i + 1] == 'D') next = 500;
                else if (s[i + 1] == 'M') next = 1000;

                if (value < next)
                    total -= value;
                else
                    total += value;

            } else {
                total += value;
            }
        }

        return total;
    }
};
