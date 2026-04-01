// Example 1:
// Input: N1 = 9, N2 = 12

// Output: 3
// Explanation:
// Factors of 9: 1, 3, 9
// Factors of 12: 1, 2, 3, 4, 6, 12
// Common Factors: 1, 3
// Greatest common factor: 3 (GCD)

// Example 2:
// Input: N1 = 20, N2 = 15

// Output: 5
// Explanation:
// Factors of 20: 1, 2, 4, 5, 10, 20
// Factors of 15: 1, 3, 5, 15
// Common Factors: 1, 5
// Greatest common factor: 5 (GCD)

/*Time complexity = O(min(n1, n2))
  Space complexity = O(1)*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int gcd_of_2_no (int n1, int n2) {
            int gcd = 1;
            for (int i = 1; i <= min(n1, n2); i++) {
                if (n1 % i == 0 && n2 % i == 0) {
                    gcd = i;
                }
            }
            return gcd;
        }

        // better approach will be, if we start from the min(n1, n2): 
        int gcd_better (int n1, int n2) {
            for (int i = min(n1, n2); i > 0; i--) {
                if (n1 % i == 0 && n2 % i == 0) {
                    return i;
                }
            }
            return 1;
        }
};

int main() {
    Solution ob;
    int n1 = 30, n2 = 15;
    int result = ob.gcd_better(n1, n2);
    cout << "GCD of " << n1 << " & " << n2 << " is: " << result << endl;
    return 0; 
}