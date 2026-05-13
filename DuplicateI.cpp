/*
Topic: Array
Problem :  Find the Duplicate Number
Problem no. :- 287
Link: https://leetcode.com/problems/find-the-duplicate-number/
level : Medium 


*/


// class Solution {
// public:
//     int findDuplicate(vector<int>& nums){ 
//    int  duplicate ; 
//         for (int i=0 ; i < nums.size() ; i++){
//             for (int j=i+1 ; j < nums.size() ; j++){
//                 if (nums[i]== nums[j]){
//                     duplicate = nums[i];
//                     return duplicate ; 
//                 }
//             }


//         }
         
//         return -1 ; 
//     }
// };




class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size()-1; i++) {

            if (nums[i] == nums[i + 1]) {
                return nums[i];
            }
        }

        return -1;
    }
};
