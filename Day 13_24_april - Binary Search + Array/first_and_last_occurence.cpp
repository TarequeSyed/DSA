/* Problem Statement: Given a sorted array of N integers, write a program to find the index of the last occurrence of the target key. If the target is not found then return -1. Note: Consider 0 based indexing

Examples
Example 1:
Input:
 N = 7, target = 13, array[] = {3, 4, 13, 13, 13, 20, 40}  
Output: 4  
*/

#include <bits/stdc++.h>
using namespace std;


/* 
In brute approach, time: O(N) -> using 'for' loop
Optimal approach: 
Time Complexity: O(log N). This is because we are using binary search, which reduces the search space by half in each iteration.

Space Complexity: O(1) */

int first_occurence (vector<int>& arr, int target) {
    int n = arr.size(), start = 0, end = n - 1;
    int ans = -1;
    while (start <= end) {
        int mid = start + ((end - start)/2);
        if (arr[mid] == target) {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > target) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return ans;
}

int last_occurence (vector<int>& arr, int target) {
    int n = arr.size(), start = 0, end = n - 1;
    int ans = -1;  // if target doesn't exist in the arr.
    while (start <= end) {
        int mid = start + ((end - start)/2);
        if (arr[mid] == target) {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {3, 4, 13, 13, 13, 20, 40, 60}; 
    int target = 13;
    int re = first_occurence(arr, target);
    int res = last_occurence(arr, target);
    cout << "The first occurence of " << target << " is: " << re << endl;
    cout << "The last occcurence of " << target << " is: " << res << endl;
    return 0;
}