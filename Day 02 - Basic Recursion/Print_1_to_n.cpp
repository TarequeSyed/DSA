#include <bits/stdc++.h>
using namespace std;

void print_1_to_n (int num, int n) {
    if (num > n) return;
    cout << num << " ";
    print_1_to_n(num+1, n);
}

int main() {
    print_1_to_n(1, 11);
    return 0;
}