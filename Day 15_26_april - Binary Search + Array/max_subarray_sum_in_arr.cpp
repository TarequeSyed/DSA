/*Kadane's Algorithm (xmsss): Maximum Subarray Sum in an Array

Problem Statement: Given an integer array nums, find the subarray with the largest sum and return
 the sum of the elements present in that subarray.

A subarray is a contiguous non-empty sequence of elements within an array.

Example 1:
Input:
 nums = [2, 3, 5, -2, 7, -4]  
Output:
 15  
Explanation:
 The subarray from index 0 to index 4 has the largest sum = 15, which is the maximum sum of any contiguous subarray.*/

/*Optimal to_do*/
#include <bits/stdc++.h>
using namespace std;

// brute method: 
/*Time: O(N^2), 
  Space: O(1)*/

int max_subarr_sum_brute (vector<int>& arr) {
    int max_sum = INT_MIN;
    for (int i = 0; i < arr.size(); i++) {
        int sum = 0;
        for (int j = i; i < arr.size(); j++) {
            sum +=  arr[j];
            max_sum = max(max_sum, sum);
        }
    }
    return max_sum;
}

int main () {
    

    return 0;
}

