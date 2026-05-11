/*

Topic: Array
Problem No. :- 121 
problem statement :-   Best Time to Buy and Sell Stock
Link:https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
Difficulty: Easy

*/
// brute force which give O(n^2) time limit exceed :- 




// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {

//         int profit = 0;
//         int maxprofit = 0;

//         for (int i = 0; i < prices.size(); i++) {

//             for (int j = i + 1; j < prices.size(); j++) {

//                 profit = prices[j] - prices[i];

//                 if (profit > maxprofit) {
//                     maxprofit = profit;
//                 }
//             }
//         }

//         return maxprofit;
//     }
// };





class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {

            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }

            int profit = prices[i] - minPrice;

            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }

        return maxProfit;
    }
};
