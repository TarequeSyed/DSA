// Given an array arr[] of size n-1 with distinct integers in the range of [1, n]. This array represents a permutation of the integers from 1 to n with one element missing. Find the missing element in the array.

// Examples: 

// Input: arr[] = [8, 2, 4, 5, 3, 7, 1]
// Output: 6
// Explanation: All the numbers from 1 to 8 are present except 6.

/*  Time Complexity: O(N)
    Space Complexity: O(1) */
#include <bits/stdc++.h>
using namespace std;

int miss_num (vector<int> & arr) {
    long long n = arr.size();
    long long sum = 0, arr_sum = 0;
    for (int i = 0; i < n; i++) {
        arr_sum += arr[i];
    }
    sum = ((n+1) * (n+2)) / 2;

    return (sum - arr_sum);
}

int main() {
    vector<int> arr = {2, 3, 5, 6, 7, 1, 8};
    cout << "Missing no.: " << miss_num(arr);
    return 0;
}