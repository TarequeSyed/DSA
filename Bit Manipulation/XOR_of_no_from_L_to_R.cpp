/*Find XOR of numbers from L to R

Problem Statement: Given two integers L and R. Find the XOR of the elements in the 
range [L , R].

Example 1:
Input :
 L = 3 , R = 5
Output :
 2
Explanation : 
answer = (3 ^ 4 ^ 5) = 2.*/

#include <bits/stdc++.h>
using namespace std;

int my_approach (int l, int r) {
    int result = 0;
    for (int i = l; i <= r; i++) {
        result ^= i;
    }
    return result;
}

class Solution {
    private: 
      int XOR_1_to_n (int n) {
        if (n % 4 == 0) return n;
        else if (n % 4 == 1) return 1;
        else if (n % 4 == 2) return n+1;
        else return 0;
      }

    public: 
      int optimal (int l, int r) {
        return (XOR_1_to_n(r) ^ XOR_1_to_n(l-1));
      }
};

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int l = 1, r = 3;
    int res = my_approach(l, r);
    cout << "XOR using my approach: " << res << endl;

    Solution obj;
    int resu = obj.optimal(l, r);
    cout << "Using optimal: " << resu << endl;

    return 0;
}