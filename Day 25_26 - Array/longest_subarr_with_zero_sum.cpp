/*Length of the longest subarray with zero Sum
to do
Problem Statement: Given an array containing both positive and negative integers, we have 
to find the length of the longest subarray with the sum of all elements equal to zero.

Example 1:
Input:
 N = 6, array[] = {9, -3, 3, -1, 6, -5}  
Result:
 5  
Explanation:
 The following subarrays sum to zero:
- {-3, 3}
- {-1, 6, -5}
- {-3, 3, -1, 6, -5}
The length of the longest subarray with sum zero is 5.*/

#include <bits/stdc++.h>
using namespace std;

int maxlen_subarr_with_sum_zero (vector<int>& arr) {
    int pre_sum = 0;
    unordered_map<int, int> mp;
    int maxlen = 0;
    int remaining = 0;
    for (int i = 0; i < arr.size(); i++) {
        pre_sum += arr[i];
        mp.
        if (pre_sum == 0) {
            maxlen = i+1;
        }

        remaining = pre_sum;

    }
} 

int main () {
    
    vector<int> arr = {9, -3, 3, -1, 6, -5};
    int res = maxlen_subarr_with_sum_zero(arr); 
    cout << "the result is: " << res << endl;

    return 0;
}