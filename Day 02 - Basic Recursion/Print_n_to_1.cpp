// Input: N = 4
// Output: 4, 3, 2, 1
// Explanation: All the numbers from 4 to 1 are printed.

#include <bits/stdc++.h>
using namespace std;

void print_num_n_to_1 (int n) {
    if (n < 1) return;
    cout << n << " ";
    print_num_n_to_1(n-1);
}

int main() {
    int n = 10;
    print_num_n_to_1(n);
    return 0;
}