// Input:
//  arr[] = 1 2 3 4 5, num = 3 
//  Output:
//  2  
// Explanation:
//  3 is present at the 2nd index of the array.

/*  Time Complexity: O(N)
    Space Complexity: O(1) */
#include <bits/stdc++.h>
using namespace std;

int lin_search (vector<int>& arr, int target) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 5, 9, 12, 19};
    int target = 12;
    cout << target << " is in index: " << lin_search(arr, target);
    return 0;
}