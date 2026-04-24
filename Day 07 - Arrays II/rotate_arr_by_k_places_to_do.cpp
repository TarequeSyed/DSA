/*Input : nums = [1, 2, 3, 4, 5, 6, 7], k = 2, right
Output : [6, 7, 1, 2, 3, 4, 5]

Input : nums = [1, 2, 3, 4, 5, 6], k=2, left
Output : [3, 4, 5, 6, 1, 2] */

#include <bits/stdc++.h>
using namespace std;

// Thinking of doing this using brute force first, then optimal method. I wanna try this myself.
void rotate_k_place_by_right (vector<int>& arr, int k) {
    int n = arr.size() - 1;
    vector<int> temp;

    for (int i = arr[n]; i >= n-k; i--) {
        temp.push_back(arr[i]);
    }
    for (int i = 0; i < n-k; i++) {
        temp.push_back(arr[i]);
    }
    for (int x : temp) {
        cout << x << " ";
    }
}

int main () {
    vector<int> arr = {2, 1, 3, 4, 5};
    int k = 2;
    cout << "Initial array was: " << endl;
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl << "After rotating by " << k << " places: " << endl;
    rotate_k_place_by_right(arr, k);
    for (int x : arr) {
        cout << x << " ";
    }
    return 0;
}