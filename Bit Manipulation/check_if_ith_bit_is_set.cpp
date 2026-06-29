/*Check if the i-th bit is set or not

Problem Statement: Given two integers n and i, return true if the ith bit in 
the binary representation of n (counting from the least significant bit, 
0-indexed) is set (i.e., equal to 1). Otherwise, return false.
Example 1:
Input: 
n = 5, i = 0
Output: 
true
Explanation: 
Binary representation of 5 is 101. The 0-th bit from LSB is set (1).*/

#include <bits/stdc++.h>
using namespace std;

// brute: 
bool check_bits (int n, int i) {
    string binary = "";
    while (n > 0) {
        binary += (n % 2 == 0 ? '0' : '1');

        n /= 2;
    }
    if (i >= binary.size()) return false;
    return binary[i] == '1';
}

// optimal:
bool check_ith_bit (int n, int i) {
    return ((1 << i) & n != 0);
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, i, t;
    cin >> t;

    while(t--) {
        cin >> n >> i;
        if ((1 << i) & n != 0) {
            cout << "True" << endl;
        }
        else {
            cout << "False" << endl;
        }
        
    }
    return 0;
}