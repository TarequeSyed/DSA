// Example 1:
// Input:N = 12345
// Output:5
// Explanation:  The number 12345 has 5 digits.

/*Time complexity = O(logN)
  Space complexity = O(1)*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int count_digits(int n) {
        int count = 0;
        while(n != 0) {
            n = n / 10;
            count++;
        }
        return count;
    }
};

int main() {
    Solution obj;
    int n = 159;
    int result = obj.count_digits(n);
    cout << "No. of digits in " << n << " is: " << result << endl;
    return 0;
}