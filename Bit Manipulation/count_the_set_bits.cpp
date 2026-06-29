/*ount the number of set bits

Problem Statement: Given an integer n, return the number of set bits (1s) in its 
binary representation.
Can you solve it in O(log n) time complexity?

Example 1:
Input: 
n = 5
Output:
 2
Explanation: 
The binary representation of 5 is 101, which has 2 set bits.*/

#include <bits/stdc++.h>
using namespace std;

int brute_count_set_bits (int num) {
    string binary = "";
    while (num != 0) {
        binary += (num % 2 == 0 ? '0' : '1');

        num /= 2;
    }
    int count = 0;
    for (char ch : binary) {
        if (ch == '1') count++;
    }
    return count;
}

int optimal_count_set_bits (int n) {
    int count = 0;
    while (n > 0) {
        count += (n & 1);
        n >>= 1;
    }

    return count;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 5;
    int res = brute_count_set_bits(n);
    int resu = optimal_count_set_bits(n);
    cout << "The number of set bits in " << n << " : " << res << endl;
    cout << "The optimal way of set bits in " << n << " : " << resu << endl;
    return 0;
}