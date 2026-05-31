

/*
Topic: String 
Problem No. :- 1047
problem statement :- Remove All Adjacent Duplicates In String
Link:https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/submissions/2018072582/
Dificulty : - Easy


*/


class Solution {
public:
    string removeDuplicates(string s) {
        string ans ="" ;
        int i=0 ;
        while (i< s.length()){
            if (ans.length()>0){
                if (ans[ans.length()-1] == s[i]){
                    ans.pop_back ();
                }
                else{
                    ans.push_back(s[i]) ;
                }
            }
            else {
                ans.push_back(s[i]) ;

            }
            i++ ;

        }
        return ans ;
    }
};
