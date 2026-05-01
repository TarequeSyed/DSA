/*Input : nums = [1, 2, 3, 4, 5, 6, 7], k = 2, right
Output : [6, 7, 1, 2, 3, 4, 5]

Input : nums = [1, 2, 3, 4, 5, 6], k=2, left
Output : [3, 4, 5, 6, 1, 2] */

#include <bits/stdc++.h>
using namespace std;

// Thinking of doing this using brute force first, then optimal method. I wanna try this myself. (done)
void rotate_k_place_by_right (vector<int>& arr, int k) {
    int n = arr.size();
    vector<int> temp;

    k = k % n;
    for (int i = n-k; i < n; i++) {
        temp.push_back(arr[i]);
    }
    for (int i = 0; i < n-k; i++) {
        temp.push_back(arr[i]);
    }
    cout << "For right using brute: " << endl;
    for (int x: temp) {
        cout << x << " ";
    }
}

void rotate_k_places_by_left (vector<int>& arr, int k) {
    int n = arr.size();
    vector<int> temp;

    k = k % n;
    for (int i = k; i < n; i++) {
        temp.push_back(arr[i]);
    }
    for (int i = 0; i < k; i++) {
        temp.push_back(arr[i]);
    }
    cout << "For left using Brute: " << endl;
    for (int x : temp) {
        cout << x << " ";
    }
    
}

// 2. Optimal: 

void reverse_arr (vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start++], arr[end--]);
    }
}


vector<int> rotate_k_by_right_optimal (vector<int>& arr, int k) {
    int n = arr.size();
    if (n == 0 || k == 0) return arr;
    k = k % n;
    // rotate all the elements of arr:
    reverse_arr(arr, 0, n-1);

    // rotate 1st k elements of arr:
    reverse_arr(arr, 0, k-1);

    // rotate first 'n-k' elements of arr:
    reverse_arr(arr, k, n-1);

    return arr;
}

vector<int> rotate_by_left_optimal (vector<int>& arr, int k) {
    int n = arr.size();
    if (n == 0 || k == 0) return arr;
    k = k % n;
    // reverse 1st 'k' elements:
    reverse_arr(arr, 0, k-1);

    // reverse firsts 'n-k' elements:
    reverse_arr(arr, k, n-1);

    // reverse whole:
    reverse_arr(arr, 0, n-1);

    return arr;
}

int main () {
    vector<int> arr = {2, 1, 3, 4, 5};
    int k = 3;
    // cout << "Initial array was: " << endl;
    // for (int x : arr) {
    //     cout << x << " ";
    // }
    // cout << endl << "After rotating by " << k << " places: " << endl;
    // rotate_k_place_by_right(arr, k);
    // for (int x : arr) {
    //     cout << x << " ";
    // }

    // cout << "---------------------------------------------------------------------------------------------------" << endl;

    vector<int> arr1 = arr;
    vector<int> arr2 = arr;
    vector<int> res_right = rotate_k_by_right_optimal(arr1,k);
    vector<int> res_left = rotate_by_left_optimal(arr2, k);

    cout << "For Right: " << endl;
    for (int x: res_right) {
        cout << x << " ";
    }
    cout << endl;

    cout << "For left: " << endl;
    for (int y : res_left) {
        cout << y << " ";
    }
    cout << endl;
    
    return 0;
}