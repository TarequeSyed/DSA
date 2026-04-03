// Example 1:
// Input: prices = {1, 1, 0, 1, 1, 1}
// Output: 3
// Explanation: There are two consecutive 1’s and three consecutive 1’s in the array out of which maximum is 3.


// Example 2:
// Input: prices = {1, 0, 1, 1, 0, 1} 
// Output: 2
// Explanation: There are two consecutive 1's in the array. 

#include <bits/stdc++.h>
using namespace std;

int most_consecutive_ones (vector<int>& arr) {
    int n = arr.size(), count = 0;
    for (int i = 0; i < n; i++) {
        while (arr[i] == 1) {
            count++;
            i++;            
            if (arr[i] == 0) {
                count = 0;
            }
        }
    }
    return count;
}

int main() {
    vector<int>prices = {1, 1, 0, 1, 1, 1};
    cout << "Max consecutive ones are: " << most_consecutive_ones(prices);
    return 0;
}