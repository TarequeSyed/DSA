#include <bits/stdc++.h>
using namespace std;

string tw_sum(vector<int>& arr, int target) {
    unordered_map<int, int> mp;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        int rem = target - arr[i];
        if (mp.find(rem) != mp.end()) {
            return "YES";
        }
        mp[arr[i]] = i;
    }
    return "NO";
}

// optimal solution: 
/*Time Complexity: O(N log N) due to sorting the array initially, where N is the number of elements. The two-pointer traversal runs in O(N).
    Space Complexity: O(1) */
bool two_sum(vector<int>& arr, int target) {
    sort(arr.begin(), arr.end());
    int start = 0, end = arr.size() - 1;
    while(start < end) {
        if (arr[start] + arr[end] == target) {
            return true;
        }
        else if (arr[start] + arr[end] < target) {
            start++;
        }
        else {
            end--;
        }
        
    }
    return false;
    
}

int main() {
    vector<int> arr = {4, 7, 1, 9};
    int target = 8;
    cout << (two_sum(arr, target) ? "Yes " : "No") << endl;
    cout << tw_sum(arr, target) << endl;
    return 0;
}