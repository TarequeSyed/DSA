#include <bits/stdc++.h>
using namespace std;

/*Time Complexity: O(N)
Space Complexity: O(1)*/
void rotate_arr_by_1(vector<int>& arr) {
    int n = arr.size() - 1;
    int temp = arr[0];
    for (int i = 0; i <= n-1; i++) {
        
        arr[i] = arr[i+1];
        
    }
    arr[n] = temp;
    for (int x : arr) {
        cout << x << " ";
    }
}

int main () {
    
    vector<int> arr = {-1, 0, 3, 6};
    rotate_arr_by_1(arr);

    return 0;
}