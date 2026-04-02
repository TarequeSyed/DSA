#include <bits/stdc++.h>
using namespace std;

/*  Time Complexity: O(N)
    Space Complexity: O(1) */

int second_max (vector<int>& arr) {
    int max = arr[0], n = arr.size(), sec_max = INT_MAX;
    // edge case: 
    if (n == 0 || n == 1) return -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    for (int i = 1; i < n; i++) {
        if (arr[i] == max) continue;
        if (arr[i] > sec_max) {
            sec_max = arr[i];
        }
    }
    return sec_max;
}

int second_min (vector<int>& arr) {
    int min = arr[0], sec_min, n = arr.size();
    // edge case: 
    if (n == 0 || n == 1) return -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    for (int i = 1; i < n; i++) {
        if (arr[i] == min) continue;
        if (arr[i] < sec_min) {
            sec_min = arr[i];
        }
    }
    cout << sec_min << endl;
    return sec_min;
}

int main() {
    vector<int> arr = {1, 2, 4, 7, 7, 5, 9};
    cout << "2nd Largest: " << second_max(arr) << endl;
    cout << "2nd Minimum: " << second_min(arr);
    return 0;
}