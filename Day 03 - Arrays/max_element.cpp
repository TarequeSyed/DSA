#include <bits/stdc++.h>
using namespace std;

// Example 1:
// Input:
//  arr[] = {2, 5, 1, 3, 0}  
// Output:
//  5  
// Explanation:
  
// 5 is the largest element in the array

#include <bits/stdc++.h>
using namespace std;

int max_ele(vector<int>& arr) {
    int max = arr[0];
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    vector <int> arr = {2, 5, 1, 3, 0};
    cout << "MAX: " << max_ele(arr) << endl;
    return 0;
}