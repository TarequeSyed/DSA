/*Find the two numbers appearing odd number of times

Problem Statement: Given an array nums of length n, every integer in the array appears twice except for two integers. 
Identify and return the two integers that appear only once in the array. Return the two numbers in ascending order.
For example, if nums = [1, 2, 1, 3, 5, 2], the correct answer is [3, 5], not [5, 3].


Example 1:
Input:
 nums = [1, 2, 1, 3, 5, 2]
Output:
 [3, 5]
Explanation:

The integers 3 and 5 have appeared only once.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> my_approach (vector<int> arr) {
    unordered_map <int, int> mp;
    vector<int> res;
    
    for (int x : arr) {
        mp[x]++;
    }
    for (auto it : mp) {
        if (it.second == 1) {
            res.push_back(it.first);
        }
        sort(res.begin(), res.end());
    }
    return res;
}

vector<int> optimal (vector<int> arr) {
    long XOR = 0;
    for (int x : arr) {
        XOR ^= x;
    }
    int rightmost = XOR & (-XOR);

    int XOR1 = 0, XOR2 = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] & rightmost) {
            XOR1 ^= arr[i];
        }
        else {
            XOR2 ^= arr[i];
        }
    }
    if (XOR1 < XOR2) return {XOR1, XOR2};
    return {XOR2, XOR1};
}

int main() {
    vector<int> arr = {1, 2, 1, 3, 5, 2};
    vector<int> resu = my_approach(arr);
    cout << "The answer: " << endl;
    for (auto x : resu) {
        cout << x << " ";
    }
    cout << endl;

    vector<int> res = optimal(arr);
    cout << "The answer with optimal: " << endl;

    for (int y : res) {
        cout << y << " ";
    }

    return 0;
}