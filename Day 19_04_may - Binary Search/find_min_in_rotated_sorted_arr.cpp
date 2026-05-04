/*Minimum in Rotated Sorted Array

Problem Statement:
Given an integer array arr of size N, sorted in ascending order (with distinct values), the array is rotated at any index which is unknown. 
Find the minimum element in the array.

Pre-requisites: Search in Rotated Sorted Array I,  Search in Rotated Sorted Array II & Binary Search algorithm

Examples
Input: arr = [4,5,6,7,0,1,2,3]
Output: 0
Explanation: The minimum element in the array is 0.
Input : arr = [3,4,5,1,2]
Output: 1
Explanation : The minimum element in the array is 1.*/

#include <bits/stdc++.h>
using namespace std;

/*
This is binary search on answer: (aka while (left < right)...)
In a rotated sorted array, the smallest element represents the point of rotation. 
It is the only element that is smaller than its previous element. 
Since the array is sorted in two segments, we can use binary search to efficiently find this pivot point.*/

/*Time Complexity: O(logN)
Space Complexity: O(1),*/
int find_min_in_rotated_sorted_arr (vector<int>& arr) {
    int n = arr.size();
    int start = 0, end = n - 1;
    while (start < end) {
        int mid = start + (end-start)/2;

        
        if (arr[mid] > arr[end]) start = mid + 1;
        else end = mid;
    }
    return arr[start];
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> arr = {4,5,6,7,0,1,2,3};
    int res = find_min_in_rotated_sorted_arr(arr);

    cout << "Min: " << res << endl;

    return 0;
}