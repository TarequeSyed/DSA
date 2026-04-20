#include <bits/stdc++.h>
using namespace std;

// by me: 
/*Time → O(n)
   Space → O(1) */
int unique_ele (vector<int>& arr) {
    unordered_map<int, int> mp;
    for (int x : arr) {
        mp[x]++;
    }
    for (auto& it : mp) {
        if (it.second == 1) {
            return it.first;
        }
    }
}

// by optimised method: 
/*XOR of two same numbers is always 0 i.e. a ^ a = 0. ←Property 1.
XOR of a number with 0 will result in the number itself i.e. 0 ^ a = a. ←Property 2*/

/*Time → O(n)
Space → O(1) */
int uni_ele_by_XOR (vector<int>& arr) {
    int x = 0;
    for (int i = 0; i < arr.size(); i++) {
        x ^= arr[i];
    }
    return x;
}

int main () {

    vector<int> arr = {2, 2, 1};
    int res = unique_ele(arr);
    int resu = uni_ele_by_XOR(arr);
    cout << "Unique element in array is: " << res << endl;
    cout << "Unique element in array is (from XOR): " << resu << endl;  
    return 0;
}