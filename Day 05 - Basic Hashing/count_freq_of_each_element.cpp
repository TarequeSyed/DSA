#include <bits/stdc++.h>
using namespace std;

// brute approach: 
/*Time Complexity: O(N²)
Space Complexity: O(N) */

void Countfreq (vector<int>& arr) {
        int n = arr.size();
        vector<bool> visited (n, false);

        for (int i = 0; i < n; i++) {
            if (visited[i] == true) continue;

            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    visited[j] = true;
                    count++;
                }
            }
            cout << arr[i] << " " << count << endl;
        }
    }

// optimal approach: 
/*Time Complexity: O(N)
Space Complexity: O(N) */
void countfreq_map (vector<int>& arr) {
    unordered_map<int, int> mp;
    for (int i = 0; i < arr.size(); i++) {
        mp[arr[i]]++;
    }
    for (auto& x : mp) {
        
        cout << x.first << "-> " << x.second << endl;
    }
}

int main () {
    
    vector<int> arr = {5, 10, 5, 10, 15, 10, 5};
        
    // brute method:
    Countfreq(arr);

    cout << endl << endl;
    // optimal method using unordered_map:
    countfreq_map(arr);
    return 0;
}