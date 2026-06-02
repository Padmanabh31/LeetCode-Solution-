/*

Topic: String
Problem No. :- 647 
problem statement :-  Palindromic Substring 

Link: https://leetcode.com/problems/palindromic-substrings/description/
Difficulty: medium

*/


class Solution {
public:

int expandindex (string s , int left , int right ){
        int count = 0 ;
        while (left >=0 && right <s.length() && s[right]==s[left]){
            count ++  ; 
            left--;
            right++ ;
            
        }
        return count ; 
    }

    int countSubstrings(string s) {
        int totalcount = 0 ;
        int n =s.length() ;

        for (int center =0 ; center < n ; center ++){
            // odd :- 

            int oddcase = expandindex(s, center , center );
            totalcount = totalcount + oddcase ;

            // even :- 

            int evencase = expandindex(s, center , center +1);
            totalcount = totalcount + evencase ;
        }

        return totalcount ;
        
    }
};
