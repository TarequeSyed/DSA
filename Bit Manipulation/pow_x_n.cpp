/*Implement Pow(x,n) | X raised to the power N:
Problem Statement: Implement the power function pow(x, n) , which calculates the x raised to n i.e. xn.


Example 1:
Input:
 x = 2.0000, n = 10  
Output:
 1024.0000  
Explanation:
 The answer is calculated as 2^10, which equals 1024.*/

#include <bits/stdc++.h>
using namespace std;

double power_my_approach (double x, double n) {
    if (x == 1 || n == 0) return 1;
    if (x > 0) return (x * power_my_approach(x, n-1));
    return ((1/x) * power_my_approach(x, n+1));
}

double optimal (double x, long n) {
    if (n == 0) return 1.0;
    if (x == 1) return x;

    if (n % 2 == 0) return (optimal(x * x, n/2));
    else return (x * (optimal(x, n-1)));
    if (n < 0) return ((1/x) * optimal(x, n+1));
     
}

int main() {
    int x = 2, n = 10;
    double ans = power_my_approach(x, n);
    cout << "Ans: " << ans << endl;
    return 0;
}