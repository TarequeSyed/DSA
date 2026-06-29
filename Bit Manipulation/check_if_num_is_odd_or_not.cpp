/*Check if a number is odd or not

Problem Statement: Given a non-negative integer n, determine whether it is odd. 
Return true if the number is odd, otherwise return false. 
A number is odd if it is not divisible by 2 (i.e., n % 2 != 0).

Example 1:
Input:
 n = 7
Output:
 true*/

#include <bits/stdc++.h>
using namespace std;

bool check_if_odd (int n) {
    return ((n % 2) != 0);
}



int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; 
    cin >> n; 

    if (check_if_odd(n)) {
        cout << "it is odd" << endl;
    }
    else {
        cout << "It is even" << endl;
    }

    return 0;
}