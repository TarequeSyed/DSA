// Example 2:
// Input:N =10                
                
// Output: False
                
// Explanation: 10 is not prime, it is a composite number because it has 4 divisors: 1, 2, 5 and 10. 

/*Time complexity = O(sqrt(N))
  Space complexity = O(1)*/

#include <bits/stdc++.h>
using namespace std;

bool check_prime (int n) {
    if (n <= 1) return false;
    if (n == 2) return true;

    for (int i = 3; i * i <= n; i += 2) {      // we are only looking for odd numbers.
        if (n % i == 0) { 
            return false;
        }
    }
    return true;
}

int main() {
    int n = 97;
    if (check_prime(n)) {
        cout << "It's a prime" << endl;
    }
    else {
        cout << "It's not" << endl;
    }
    return 0;
}