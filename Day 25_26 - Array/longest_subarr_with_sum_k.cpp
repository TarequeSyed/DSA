/*Longest Subarray with given Sum K(Positives)

Problem Statement: Given an array nums of size n and an integer k, find the length of the 
longest sub-array that sums to k. If no such sub-array exists, return 0.


Example 1:
Input:
 nums = [10, 5, 2, 7, 1, 9], k = 15  
Output:
 4  
Explanation:
 The longest sub-array with a sum equal to 15 is [5, 2, 7, 1], which has a length of 4. 
 This sub-array starts at index 1 and ends at index 4, and the sum of its elements 
 (5 + 2 + 7 + 1) equals 15. Therefore, the length of this sub-array is 4.*/

#include <bits/stdc++.h>
using namespace std;

int longest_subarr_with_sum_k (vector<int>& arr, int k) {
    int left = 0, right = 0, sum = 0, maxlen = 0;
    while (right < arr.size()) {
        sum += arr[right];
        while (sum > k) {
            sum -= arr[left];
            left++;
        }
        if (sum == k) {
            maxlen = max(maxlen, right - left + 1);
        }
        right++;
    }
    return maxlen;
}

int main () {
    vector<int> arr = {10, 5, 2, 7, 1, 9};
    int k = 15;
    int res = longest_subarr_with_sum_k(arr, k);
    cout << "Result is: " << res << endl;

    return 0;
}