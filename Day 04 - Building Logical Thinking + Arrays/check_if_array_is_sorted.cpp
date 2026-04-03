// Example 1:
// Input: N = 5, array[] = {1,2,3,4,5}
// Output: True.
// Explanation: The given array is sorted i.e Every element in the array is smaller than or equals to its next values, So the answer is True.

#include <bits/stdc++.h>
using namespace std;

bool isSorted (vector<int>& arr){
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i-1]) return false;
    }   
    return true;
}

int main () {
    
    vector<int> arr = {1, 2, 4, 3, 5};
    if (isSorted(arr)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}