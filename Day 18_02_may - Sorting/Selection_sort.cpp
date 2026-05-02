/*Selection Sort Algorithm

Problem Statement: Given an array of N integers, write a program to implement the Selection sorting algorithm.

Examples
Example 1:
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Explanation: After sorting the array is: 9, 13, 20, 24, 46, 52*/

/*Time Complexity:O(N^2)

Space Complexity: O(1). */

#include <bits/stdc++.h>
using namespace std;

void Selection_sort (vector<int>& arr) {
    for (int i = 0; i < arr.size()-1 ; i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[i]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main() {
    vector<int> arr = {13,46,24,52,20,9};

    cout << "Before: " << endl;
    for (int x: arr) {
        cout << x << " ";
    }
    cout << endl << "After: " << endl;
    Selection_sort(arr);
    for (int y: arr) {
        cout << y << " ";
    }
    return 0;
}