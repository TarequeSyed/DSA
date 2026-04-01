#include <bits/stdc++.h>
using namespace std;

/*Time complexity = O(2^N)
  Space complexity = O(N)*/
int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

int main() {
    int n = 10;
    cout << "Fib of 10 no. : " << fib(n) << endl;
    return 0;
}