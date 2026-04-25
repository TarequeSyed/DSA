/*Problem Statement: You are given an array of prices where prices[i] is the price of a given stock on an ith day. You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Examples
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note: That buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.*/

// optimal to_do

#include <bits/stdc++.h>
using namespace std;

// brute method: 
/*Time: O(N^2),
  Space: O(1)*/
int max_profit (vector<int>& arr) {
    int max_1 = 0;
    for (int i = arr.size() - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            
            max_1 = max(arr[i]-arr[j], max_1);
        }
    }
    return max_1;
}

int main() {
    vector<int> arr = {7,1,5,3,6,4};
    int res = max_profit(arr);

    cout << "Max profit is: " << res << endl;
    return 0;
}
