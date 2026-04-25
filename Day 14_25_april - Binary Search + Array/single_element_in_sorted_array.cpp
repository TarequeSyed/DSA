/*Problem Statement: Given an array of N integers. Every number in the array except one appears twice. Find the single number in the array.


Input : arr[] = {1,1,2,2,3,3,4,5,5,6,6}
Output: 4
Explanation: Only the number 4 appears once in the array.*/

#include <bits/stdc++.h>
using namespace std;

// Brute force: using XOR
// Optimal approach: using Binary search; Time: O(logN), Space: O(1)  to_do or to do

// 1. Brute:
int single_element_in_sorted_arr (vector<int>& arr) {
    int ans = 0;
    for (int i = 0; i < arr.size(); i++) {
        ans ^= arr[i];
    }
    return ans;
}

int main () {
    vector<int> arr = {1,1,2,2,3,3,4,5,5,6,6};
    int res = single_element_in_sorted_arr(arr);

    cout << "Single element in sorted array is: " << res << endl;

    return 0;
}