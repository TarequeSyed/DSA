/*Problem Statement: Given an array of N integers. Every number in the array except one appears twice. Find the single number in the array.


Input : arr[] = {1,1,2,2,3,3,4,5,5,6,6}
Output: 4
Explanation: Only the number 4 appears once in the array.*/

#include <bits/stdc++.h>
using namespace std;

// Brute force: using XOR
// Optimal approach: using Binary search; Time: O(logN), Space: O(1)

// 1. Brute:
int single_element_in_sorted_arr (vector<int>& arr) {
    int ans = 0;
    for (int i = 0; i < arr.size(); i++) {
        ans ^= arr[i];
    }
    return ans;
}

// 2. Optimal: 
int single_ele_in_sorted_arr_optimal (vector<int>& arr) {
    int start = 0, end = arr.size() - 1;
    // doing using parity tricks:
    while (start < end) {
        int mid = start + (end - start)/2;
        if (mid % 2 == 1) mid--;

        if (arr[mid] == arr[mid+1]) {
            start = mid + 2;
        }
        else {
            end = mid;
        }
    }
    return arr[start];    
}
int main () {
    vector<int> arr = {1,1,2,2,3,3,4,5,5,6,6};
    int res = single_element_in_sorted_arr(arr);

    cout << "Single element in sorted array is: " << res << endl;


    int resu = single_ele_in_sorted_arr_optimal(arr);
    
    cout << "Single element in sorted arr (optimal): " << resu << endl;
    return 0;
}