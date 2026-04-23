/*
You are given a sorted 
array arr of distinct values and a target value x. You need to search for the index of the target value in the array.

Input Format: arr[] = {1,2,4,7}, x = 6
Result: 3
Explanation: 6 is not present in the array. So, if we will insert 6 in the 3rd index(0-based indexing), 
the array will still be sorted. {1,2,4,6,7}. */


// keeping the array sorted even after 'target' is added.

/*Time Complexity: O(logN)
Space Complexity: O(1) */


#include <bits/stdc++.h>
using namespace std;

int Search_Insert (vector<int>& arr, int target) {
    int n = arr.size();
    int start = 0, end = n - 1;
    int ans = n;              // if number is not present, we will return 'n'.
    while (start <= end) {
        int mid = start + ((end - start)/2);
        if (arr[mid] >= target) {
            ans = mid;
            arr.insert(arr.begin() + mid, target);
            end = mid - 1;
            
        }
        else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 2, 9};
    int x = 3;
    int res = Search_Insert(arr, x);
    cout << "To insert here at index: " << res << endl;
    for (int y : arr) {
        cout << y << " ";
    }
    return 0;
}