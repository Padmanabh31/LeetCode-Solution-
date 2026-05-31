
/*
Topic: String
Problem :  Remove All Occurrences of a Substring
Problem no. :- 1910
Link: 
Difficulty :- Medium


*/
class Solution {
public:
    string removeOccurrences(string s, string part) {
        int pos = s.find(part);
        while ( pos != string::npos){
            s.erase(pos , part.length()); 
            pos = s.find(part) ; 
        }
        return s ;
    }
};
