#include <bits/stdc++.h>
using namespace std;

/*Time Complexity: O(N)
Space Complexity: O(1)*/

int remove_dup (vector<int>& arr) {
    int n = arr.size() - 1; 
    
    int i = 0; 
    for (int j = 1; j < n; j++) {
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

int main() {
    vector<int> arr = {0,0,1,1,1,2,2,3,3,4};
    int rem = remove_dup(arr);
    cout << "After removing duplicates: " << endl;
    for (int m = 0; m < rem; m++) {
        cout << arr[m] << " ";
    }
    return 0;
}