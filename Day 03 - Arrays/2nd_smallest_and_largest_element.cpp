#include <bits/stdc++.h>
using namespace std;

/*  Time Complexity: O(N)
    Space Complexity: O(1) */

int second_max (vector<int>& arr) {
    int max = INT_MIN, n = arr.size(), sec_max = INT_MIN;
    // edge case: 
    if (n == 0 || n == 1) return -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            sec_max = max;
            max = arr[i];
        }
        else if (arr[i] > sec_max && arr[i] != max) {
            sec_max = arr[i];
        } 
    }
    return sec_max;
}

int second_min (vector<int>& arr) {
    int min = INT_MAX, sec_min = INT_MAX, n = arr.size();
    // edge case: 
    if (n == 0 || n == 1) return -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            sec_min = min;
            min = arr[i];
        }    
        else if (arr[i] < sec_min && arr[i] != sec_min) {
            sec_min = arr[i];
        }
    }
    return sec_min;
    
}

int main() {
    vector<int> arr = {1, 2, 4, 7, 7, 5, 9};
    cout << "2nd Largest: " << second_max(arr) << endl;
    cout << "2nd Minimum: " << second_min(arr);
    return 0;
}