/*Finding Sqrt of a number using Binary Search

Problem Statement: You are given a positive integer n. Your task is to find and return its square root. 
If ‘n’ is not a perfect square, then return the floor value of sqrt(n).

Examples:
Input: N = 36
Output: 6
Explanation: Square root of 36 is 6. 
Input: N = 28
Output: 5
Explanation: Square root of 28 is approximately 5.292. So, the floor value will be 5. */

#include <bits/stdc++.h>
using namespace std;

long long  sqr_root (long long n) {
    long long start = 1, end = n/2;
    long long ans = 0;
    if (n < 2) return n; // edge case
    
    while (start <= end) {
        long long mid = start + (end - start)/2;
        // if ((long long) mid * mid <= n) {
        if ((long long) mid <= n/mid) {   
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return ans;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n = 1212212;
    long long root = sqr_root(n);

    cout << "Sqr root of " << n << " is: " << root << endl;

    return 0;
}