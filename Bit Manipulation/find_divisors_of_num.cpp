/*Print all Divisors of a given Number

Problem Statement: Given an integer N, return all divisors of N.
A divisor of an integer N is a positive integer that divides N without leaving a remainder. In other words, 
if N is divisible by another integer without any remainder, then that integer is considered a divisor of N.
Examples
Input: N = 36
Output: [1, 2, 3, 4, 6, 9, 12, 18, 36]  
Explanation: The divisors of 36 are 1, 2, 3, 4, 6, 9, 12, 18, 36.*/

#include <bits/stdc++.h>
using namespace std;

vector<int> my_approach (int n) {
    vector<int> res;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            res.push_back(i);
        }
    }
    return res;
}

vector<int> optimal (int n) {
    vector<int> res;
    for (int i = 1; i * i <= n ; i++) {
        if (n % i == 0) {
            res.push_back(i);
            
            if (i != n/i)
                res.push_back(n/i);
        }

    }
    return res;
}

int main() {
    int n = 36;
    vector<int> res = my_approach(n);

    cout << "The divisors of " << n << " are: " << endl;
    for (int x : res) {
        cout << x << " ";
    }
    cout << endl;

    vector<int> resu = optimal(n);
    cout << "Divisors from optimal: " << endl;
    for (int y : resu) {
        cout << y << " ";
    }
    return 0;
}