/*Search Element in Rotated Sorted Array II

Problem Statement: Given an integer array arr of size N, sorted in ascending order (may contain duplicate values) and a target value k. 
Now the array is rotated at some pivot point unknown to you. Return True if k is present and otherwise, return False.

Examples
Example 1:
Input Format: arr = [7, 8, 1, 2, 3, 3, 3, 4, 5, 6], k = 3
Result: True
Explanation: The element 3 is present in the array. So, the answer is True.

Example 2:
Input Format: arr = [7, 8, 1, 2, 3, 3, 3, 4, 5, 6], k = 10
Result: False
Explanation: The element 10 is not present in the array. So, the answer is False.
*/


/*Time Complexity: O(logN)

Space Complexity: O(1),*/

#include <bits/stdc++.h>
using namespace std;

bool search_element (vector<int>& arr, int target) {
    int n = arr.size();
    int start = 0, end = n - 1;
    while (start <= end) {
        int mid = start + (end-start)/2;
        
        if (arr[mid] == target) return true;

        if (arr[start] == arr[mid] && arr[mid] == arr[end]) {
            start++;
            end--;
            continue;
        }

        if (arr[start] <= arr[mid]) {
            if (arr[start] <= target && target <= arr[mid]) {
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
    return false;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> arr = {3, 1, 2, 3, 3, 3};
    int k = 4;

    if (search_element(arr, k)) {
        cout << "Yes..." << endl;
    }
    else {
        cout << "NO...." << endl;
    }
    

    return 0;
}