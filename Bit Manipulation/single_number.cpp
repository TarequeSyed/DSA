/*Find the number that appears once, and the other numbers twice

Problem Statement: Given a non-empty array of integers arr, 
every element appears twice except for one. Find that single one.

Example 1:
Input Format: arr[] = {2,2,1}
Result: 1
Explanation: In this array, only the element 1 appear once and so it is the answer.*/

#include <bits/stdc++.h>
using namespace std;

int single_no (vector<int>& arr) {
    int result = 0;
    for (int x : arr) {
        result ^= x;
    }
    return result;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> arr = {2, 2, 3, 4, 3, 3, 4, 5, 8, 9, 5, 8, 3};
    int res = single_no(arr);
    cout << "Single number is: " << res << endl;

    return 0;
}