/*

Topic: String
Problem No. :- 539
problem statement :-  Minimum Time Difference

Link:https://leetcode.com/problems/minimum-time-difference/submissions/2018537517/
Difficulty: medium

*/

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector <int> minutes ; 


        for (int i= 0 ; i < timePoints.size() ; i++){
        string curr = timePoints[i];
        int hours = stoi(curr.substr(0,2));
        int min = stoi(curr.substr(3,2));
        int totalmin = hours*60 + min ; 

        minutes.push_back(totalmin) ; 

        }


      // step 2 sorting 

        sort (minutes.begin() , minutes.end ()) ; 

        // step 3 --  diffrence 


        int mini = INT_MAX ; 
        int n = minutes.size() ; 

        for (int i=0 ; i <n-1 ; i ++ ){
            int diff = minutes[i+1] - minutes[i] ;

            mini = min(mini , diff) ;
        }
// specia; case :-
        int lastdiff = (minutes[0] +1440) - minutes[n-1] ; 
        mini = min (mini , lastdiff ) ; 

    return mini ; 






        /*

add this in the last case which handel all edge cases 


 int lastdiff = (minutes[0] +1440) - minutes[n-1] ; 
        // int lastdiff2 = minutes[n-1] - minutes[0] ; 
        // int lastdiff = min(lastdiff1 , lastdiff2) ;
        mini = min (mini , lastdiff ) ; 





            */

    }
    
};
