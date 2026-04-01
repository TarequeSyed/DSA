// Input: N = 36
// Output: [1, 2, 3, 4, 6, 9, 12, 18, 36]  
// Explanation: The divisors of 36 are 1, 2, 3, 4, 6, 9, 12, 18, 36.


/*Time complexity = O(sqrt(N))
  Space complexity = O(sqrt(N))*/
#include <bits/stdc++.h>
using namespace std;

vector<int> print_all_divisors (int n) {
    vector<int> result;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            result.push_back(i);
        }

        if (i != n / i) {
            result.push_back(n/i);
        }
    }
    return result;
}
    

int main() {
    int n = 36;
    for (int x : print_all_divisors(n)) {
        cout << x << " ";
    }
    return 0;
}