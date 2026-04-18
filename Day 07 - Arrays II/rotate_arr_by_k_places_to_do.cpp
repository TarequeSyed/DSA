/*Input : nums = [1, 2, 3, 4, 5, 6, 7], k = 2, right
Output : [6, 7, 1, 2, 3, 4, 5]

Input : nums = [1, 2, 3, 4, 5, 6], k=2, left
Output : [3, 4, 5, 6, 1, 2] */

#include <bits/stdc++.h>
using namespace std;

void rotate_k_place_by_right (vector<int>& arr, int k) {
    int n = arr.size() - 1;
    int temp = arr[n];
    for (int i = 0; i < n; i++) {
        while(k--) {
            
        }    
    }
    arr[0] = temp;
}

int main () {
    

    return 0;
}