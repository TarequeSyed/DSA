/*Problem Statement: Given an array nums consisting of only 0, 1, or 2. Sort the array in non-decreasing order. 
  The sorting must be done in-place, without making a copy of the original array.

Examples
Input: nums = [1, 0, 2, 1, 0]
Output: [0, 0, 1, 1, 2]
*/

/*Complexities of brute, better approach and optimal approach is same.
Time Complexity: O(n)
Space Complexity: O(1)*/

// Optimal method Algorithm(xmsss) is: Dutch National Flag algorithm. to do this optimal approach

#include <bits/stdc++.h>
using namespace std;

class Brute {
    public:
        // i will count the freq. of 0, 1 and 2 and then add them in vector arr.
        void sort_0_1_2(vector<int>& arr) {
            int count0 = 0, count1 = 0, count2 = 0;
            for (int i = 0; i < arr.size(); i++) {
                if (arr[i] == 0) count0++;
                else if (arr[i] == 1) count1++;
                else count2++;
            }
            int index = 0;
            while (count0--) {
                arr[index++] = 0;
            }
            while (count1--) {
                arr[index++] = 1;
            }
            while (count2--) {
                arr[index++] = 2;
            }
            for (int x : arr) {
                cout << x << " ";
            }
        }
};

int main() {
    Brute br;
    vector<int> arr = {1, 0, 2, 1, 0};
    br.sort_0_1_2(arr);
    return 0;
}