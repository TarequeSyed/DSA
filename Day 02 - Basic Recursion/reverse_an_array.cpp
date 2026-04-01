// Input: N = 5, arr[] = {5,4,3,2,1}
// Output: {1,2,3,4,5}
// Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.

#include <bits/stdc++.h>
using namespace std;

void rev (vector<int>& arr) {
    int start = 0, end = arr.size() - 1;
    while (start < end) {
        swap(arr[start++], arr[end--]);
    }
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    cout << "Initally: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
    rev(arr);
    cout << "Finally: ";
    for (int x: arr) {
        cout << x << " ";
    }
    return 0;
}