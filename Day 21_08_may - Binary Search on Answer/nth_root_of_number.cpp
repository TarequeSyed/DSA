/*Nth Root of a Number using Binary Search

Problem Statement: Given two numbers N and M, find the Nth root of M. The nth root of a number M is defined as a number X when raised
 to the power N equals M. If the 'nth root is not an integer, return -1.

Examples
Input: N = 3, M = 27
Output: 3
Explanation: The cube root of 27 is equal to 3.
Input : N = 4, M = 69
Output: -1
Explanation : The 4th root of 69 does not exist. So, the answer is -1.*/

// to do

#include <bits/stdc++.h>
using namespace std;

double power (double x, double n) {       // x^(1/n)
    double ans = 1;
    while (n--) {
        ans *= x;
    }
    return ans;
} 

double nth_root_of_num (double n, double m) {    // m^(1/n)
    if (n == 1) return m;
    if (n == 0) return 1;
    if (m == 0) return 0;
    double start = 1, end = m/2;
    while (start <= end) {
        int mid = start + (end-start)/2;
        if (power(mid, n) == m) return mid;
        else if (power(mid, n) < m) start = mid + 1;
        else end = mid - 1;
    }
    return -1;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N = 0, M =0 ;
    double res = nth_root_of_num(N, M);
    cout << N << "rd root of number " << M << " is: " << res << endl;

    return 0;
}