/*Set the rightmost bit

Problem Statement: Given a positive integer n, set the rightmost unset (0) bit of its 
binary representation to 1 and return the resulting integer.
If all bits are already set, return the number as it is.

Example 1:
Input:
 n = 10 (binary: 1010)  
Output:
 11 (binary: 1011) */

#include <bits/stdc++.h>
using namespace std;

int set_rightmost_bit (int n) {
    if ((n & n+1) == 0) return n;
    return (n | n+1);
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int num = 3;
    int res = set_rightmost_bit(num);
    cout << "After setting the rightmost bit: " << res << endl;

    return 0;
}