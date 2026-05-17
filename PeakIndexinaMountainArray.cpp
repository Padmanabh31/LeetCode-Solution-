/*

Topic: Array
Problem No. :- 852 
problem statement :-  Peak Index in a Mountain Array

Link: https://leetcode.com/problems/peak-index-in-a-mountain-array/submissions/2005004892/
Difficulty: medium

*/


class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s =0 ;
        int end = arr.size()-1 ; 
        int mid = s +(end-s)/2;
        while(s< end){
            if (arr[mid]< arr[mid+1]){
                s= mid +1 ; 
            }
            else {
                end= mid ;
            }
            mid = s+ (end-s)/2 ; 
        }
        return s ; 
    }
};
