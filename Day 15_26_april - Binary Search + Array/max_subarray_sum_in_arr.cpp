/*Kadane's Algorithm (xmsss): Maximum Subarray Sum in an Array 

Problem Statement: Given an integer array nums, find the subarray with the largest sum and return
 the sum of the elements present in that subarray.

A subarray is a contiguous non-empty sequence of elements within an array.
to_do: Print the max subarr as well.
Example 1:
Input:
 nums = [2, 3, 5, -2, 7, -4]  
Output:
 15  
Explanation:
 The subarray from index 0 to index 4 has the largest sum = 15, which is the maximum sum of any contiguous subarray.*/


#include <bits/stdc++.h>
using namespace std;

// brute method: 
/*Time: O(N^2), 
  Space: O(1)*/

int max_subarr_sum_brute (vector<int>& arr) {
    int max_sum = INT_MIN;
    for (int i = 0; i < arr.size(); i++) {
        int sum = 0;
        for (int j = i; j < arr.size(); j++) {
            sum +=  arr[j];
            max_sum = max(max_sum, sum);
        }
    }
    return max_sum;
}

int max_subarr_sum_optimal (vector<int>& arr) {
    int curr_sum = arr[0], max_sum = arr[0];
    vector<int> temp;
    for (int i = 1; i < arr.size(); i++) {
        curr_sum = max(arr[i], curr_sum + arr[i]);

        max_sum = max(max_sum, curr_sum);
    }
    return {max_sum};
}

int main () {
    vector<int> arr = {2, 3, 5, -2, 7, -4};
    int res = max_subarr_sum_brute(arr);
    int resu = max_subarr_sum_optimal(arr);

    cout << "Max subarr sum: " << res << endl;
    cout << "Max subarr sum (optimal): " << resu << endl;

    return 0;
}

