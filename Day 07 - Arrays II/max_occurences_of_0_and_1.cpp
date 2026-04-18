/* Problem Statement: Given an array that contains only 1 and 0 return the count of maximum consecutive ones in the array..
Input: prices = {1, 1, 0, 1, 1, 1}
Output: 3 */


/* Time Complexity: O(N)
   Space Complexity: O(1)*/
#include <bits/stdc++.h>
using namespace std;

int count_occ_of_1 (vector<int>& arr) {
    int count = 0, maximum = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1) {
            count++;
        }
        else {
            count = 0;
        }
        maximum = max(count, maximum);
        
    }
    return maximum;
}

int main () {
    vector<int> arr = {1, 1, 0, 1, 1, 1};
    int res = count_occ_of_1(arr);
    cout << "Maximum: " << res << endl;
    return 0;
}