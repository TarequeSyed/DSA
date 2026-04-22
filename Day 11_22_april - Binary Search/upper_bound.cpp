/*The upper bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than the given key i.e. x.

The upper bound is the smallest index, ind, where arr[ind] > x.

Example 1:
Input Format: N = 4, arr[] = {1,2,2,3}, x = 2
Result: 3

Example 2:
Input Format: N = 6, arr[] = {3,5,8,9,15,19}, x = 9
Result: 4

*/

/*Time Complexity: O(logn) 
  Space Complexity: O(1)*/
#include <bits/stdc++.h>
using namespace std;

int upper_bound (vector<int>& arr, int target) {    
    int n = arr.size(), start = 0, end = n - 1;
    int ans = n;
    while (start <= end) {
        int mid = start + ((end-start)/2);
        if (arr[mid] > target) {
            ans = mid;
            end = mid - 1;
        } 
        else {
            start = mid + 1;
        }
    }
    return ans;
}

int main () {
    vector<int> arr = {3, 5, 8, 9, 15, 19};
    int target = 9;
    int res = upper_bound(arr, target);
    cout << "The upper bound is the index: " << res << endl;

    return 0;
}