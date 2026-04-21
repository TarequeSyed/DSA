/*The lower bound is the smallest index, ind, where arr[ind] >= x. But if any such index is not found, 
the lower bound algorithm returns n i.e. size of the given array.

Ex: 
Input Format: N = 4, arr[] = {1,2,2,3}, x = 2
Result: 1
Explanation: Index 1 is the smallest index such that arr[1] >= x.*/

#include <bits/stdc++.h>
using namespace std;

// Brute force will be to linear search
/* Time Complexity: O(N), where N = size of the given array.
   Space Complexity: O(1)*/

// optimal will be to use, Binary Search:
/* Time Complexity: O(logN), where N = size of the given array.
   Space Complexity: O(1)*/


int Lower_bound_in_BS (vector<int>& arr, int target) {
    int n = arr.size();
    int start = 0, end = n - 1;
    int ans = n;
    while (start <= end) {
        int mid = start + ((end - start) / 2);
        if (arr[mid] >= target) {
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return ans;
     // or -> return n;  // it elements doesn't exist which are greater than target  
}

int main() {
    vector<int> arr = {3, 5, 8, 15, 19};  
                  
    int x = 9;                          
    int ind = Lower_bound_in_BS(arr, x);
    cout << "The lower bound is the index: " << ind << "\n";  // Output the result
    return 0;
}