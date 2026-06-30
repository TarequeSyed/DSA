/*Swap two numbers

Problem Statement: Given two integers a and b, swap them in-place using only 2 variables
 (without using a temporary variable).
Example 1:
Input:
 a = 5, b = 10
Output:
 a = 10, b = 5
*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b;
    cin >> a >> b;
    cout << "Before: " << endl;
    cout << "a: " << a << " and b: " << b << endl;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After: " << endl;
    cout << "a: " << a << " and b: " << b << endl;

    return 0;
}