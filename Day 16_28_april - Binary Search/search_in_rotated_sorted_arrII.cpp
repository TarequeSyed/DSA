/*
Search Element in Rotated Sorted Array II

Problem Statement: Given an integer array arr of size N, sorted in ascending order (may contain duplicate values) 
and a target value k. Now the array is rotated at some pivot point unknown to you. 
Return True if k is present and otherwise, return False.

Examples:
Example 1:
Input Format: arr = [7, 8, 1, 2, 3, 3, 3, 4, 5, 6], k = 3
Result: True
Explanation: The element 3 is present in the array. So, the answer is True.

Example 2:
Input Format: arr = [7, 8, 1, 2, 3, 3, 3, 4, 5, 6], k = 10
Result: False
Explanation: The element 10 is not present in the array. So, the answer is False.*/

// mksxs: I can find the all the duplicate numbers index + number of duplicate no.
// to_do: Optimal approach
#include <bits/stdc++.h>
using namespace std;

// that was my inution: 
 /*but, Time: O(n logn) and Space: O(1)*/
bool search_II (vector<int>& arr, int target) {
    // we want to just see whether this element exists or not -> hence, we can just use set for distinct elements.
    set<int> st;
    for (int& x: arr) {
        st.insert(x);
    }
    int n = arr.size();
    int start = 0, end = n - 1;

    while (start <= end) {
        int mid = start + ((end - start)/2);

        if (arr[mid] == target) return true;
        if (arr[start] <= arr[mid]) {
            if (target >= arr[start] && target < arr[mid]) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        else {
            if (target > arr[mid] && target <= arr[end]) {
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
    
    vector<int> arr = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    int x = 10;
    
    if (search_II(arr, x)) {
        cout << "It is there!" << endl;
    }
    else {
        cout << "It is not there!" << endl;
    }

    return 0;
}