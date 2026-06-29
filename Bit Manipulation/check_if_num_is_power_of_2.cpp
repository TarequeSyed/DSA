/*Check if a number is power of 2 or not: 

Problem Statement: Given an integer n, return true if it is a power of two. 
Otherwise, return false. An integer n is a power of two if there exists 
an integer x such that n == 2ˣ.

Example 1:
Input: 
n = 16
Output: true*/

#include <bits/stdc++.h>
using namespace std;

bool my_approach_check_power_of_2 (int num) {
    while (num >= 2) {
        int rem = num % 2;
        num /= 2;
        if (rem == 1) return false;
        
    }
    if (num == 2) return true;
}

bool optimal_check (int num) {
    // let say, n = 16 -> then n & n-1 == 0 (10000 & 01111 == 0) -> power of 2
    return ((num & (num-1)) == 0);
}
int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 16;
    if (my_approach_check_power_of_2(n)) {
        cout << "It is power of 2" << endl;
    }
    else {
        cout << "It is not power of 2" << endl;
    }
    
    if (optimal_check(n)) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }

    return 0;
}