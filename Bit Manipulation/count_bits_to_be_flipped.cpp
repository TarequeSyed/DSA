/*Count number of bits to be flipped to convert A to B

Problem Statement: Given two integers start and goal. Flip the minimum number of bits of 
start integer to convert it into goal integer.
A bits flip in the number val is to choose any bit in binary representation of val 
and flipping it from either 0 to 1 or 1 to 0.

Example 1:
Input : 
start = 10 , goal = 7
Output :
 3
Explanation :
 The binary representation of 10 is "1010". The binary representation of 7 is "111". If we flip the underlined bits in binary representation of 10 then we will obtain our goal.
*/

#include <bits/stdc++.h>
using namespace std;

int my_approach (int a, int b) {
    string s = "";
    int count = 0;
    int n = a ^ b;
    while (n != 0) {
        s += (n % 2 == 0 ? '0' : '1');
        n /= 2;
    }
    for (char ch : s) {
        if (ch == '1') count++;
    }
    return count;
}

int optimal (int a, int b) {
    int n = a ^ b;
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

    int a = 3, b = 3;
    
    int res = my_approach(a, b);
    cout << "No of bits to be flipped: " << res << endl;

    int resu = optimal(a, b);
    cout << "Using Optimal: " << resu << endl;

    return 0;
}