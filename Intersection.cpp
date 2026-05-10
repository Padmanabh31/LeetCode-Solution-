/*

Topic: Array
Problem No. :- 350
problem statement :-  Intersection of Two Arrays II
Link: https://leetcode.com/problems/intersection-of-two-arrays-ii/description/
Difficulty: Easy

*/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans ; 
        for (int i=0 ; i < nums1.size() ; i++){
            for (int j=0 ; j< nums2.size() ; j++){
                if(nums1[i]==nums2[j]){
                    nums2[j]=  INT_MIN ; 
                    ans.push_back (nums1[i]);
                    break ;
                }
            }
        }
        return ans ; 
        
    }
};

/*
// optimized code  after sorting of the array :-
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> ans;

        int i = 0;
        int j = 0;

        while (i < nums1.size() && j < nums2.size()) {

            if (nums1[i] == nums2[j]) {

                ans.push_back(nums1[i]);

                i++;
                j++;
            }

            else if (nums1[i] < nums2[j]) {
                i++;
            }

            else {
                j++;
            }
        }

        return ans;
    }
};
*/
