/*
Tpoic: Array
Problem: Move Zeroes
Link: https://leetcode.com/problems/move-zeroes/
Difficulty: Easy

*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;   
        
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[k] = nums[i];
                k++;
            }
        }
        
        
        for (int i = k; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};
