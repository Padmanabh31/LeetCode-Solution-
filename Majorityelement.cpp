
/*
Topic: Array
Problem : Majority element 
Problem no. :- 169 
Link: https://leetcode.com/problems/majority-element/


*/




class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0 ;
            int count =0 ;
        for (int i=0 ; i < nums.size() ; i++ ){
            // int candidate = nums[0];
             if (count ==0){
                candidate =nums[i];
             }

            if (nums[i]== candidate){
                count ++ ;
            }
            else  {
                count -- ;
            }

        }
        return candidate ; 
    }

};



// using hash-map 

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int,int> freq;

        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        for (auto it : freq) {

            if (it.second > nums.size()/2)
                return it.first;
        }

        return -1;
    }
};

