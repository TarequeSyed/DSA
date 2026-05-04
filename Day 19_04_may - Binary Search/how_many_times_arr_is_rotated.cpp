/*Find out how many times the array has been rotated (This arr is sorted arr and then rotated)

Problem Statement: Given an integer array arr of size N, sorted in ascending order (with distinct values). 
Now the array is rotated between 1 to N times which is unknown. Find how many times the array has been rotated.

Pre-requisites: Find minimum in Rotated Sorted Array,  Search in Rotated Sorted Array II & Binary Search algorithm

Examples
Input : arr = [4,5,6,7,0,1,2,3]
Result: 4
Explanation: The original array should be [0,1,2,3,4,5,6,7]. So, we can notice that the array has been rotated 4 times.

Input : arr = [3,4,5,1,2]
Output : 3
Explanation: The original array should be [1,2,3,4,5]. So, we can notice that the array has been rotated 3 times.*/

/*Time Complexity: O(logN)
Space Complexity: O(1)*/

#include <bits/stdc++.h>
using namespace std;

int times_arr_is_rotated (vector<int>& arr) {
    int n = arr.size();
    int start = 0, end = n - 1;

    while (start < end) {
        int mid = start + (end - start)/2;

        

        if (arr[mid] > arr[end]) start = mid + 1;
        else end = mid;
    }
    return start;
}

int main () {
    
    vector<int> arr = {1, 2, 3, 4, 5};
    int res = times_arr_is_rotated(arr);

    cout << "No. of times it rotated: " << res << endl;

    return 0;
}