/* Problem Statement: Given an integer array nums, sorted in ascending order (with distinct values) and a target value k. The array is rotated at some pivot point that is unknown. Find the index at which k is present and if k is not present return -1.

Examples
Input:nums = [4, 5, 6, 7, 0, 1, 2], k = 0
Output :4
Explanation : Here, the target is 0. We can see that 0 is present in the given rotated sorted array, nums. Thus, we get output as 4, which is the index at which 0 is present in the array.

Input: nums = [4, 5, 6, 7, 0, 1, 2], k = 3
Output :-1
Explanation :Here, the target is 3. Since 3 is not present in the given rotated sorted array. Thus, we get the output as -1. */

/*Time: O(logN),
  Space: O(1)*/

#include <bits/stdc++.h>
using namespace std;

int search (vector<int>& arr, int target) {
    int n = arr.size();
    int start = 0, end = n - 1;
    while (start <= end) {
        int mid = start + ((end - start)/2);

        if (arr[mid] == target) return mid;

        if (arr[start] <= arr[mid]) {
            if (arr[start] <= target && target < arr[mid]) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        else {
            if (arr[mid] < target && target <= arr[end]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main () {
    
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int k = 0;

    int res = search(arr, k);
    cout << "Element location: " << res << endl;

    return 0;
}