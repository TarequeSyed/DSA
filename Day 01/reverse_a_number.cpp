// Input: N = 12345
// Output:54321
// Explanation: The reverse of 12345 is 54321.

/*Time complexity = O(logN)
  Space complexity = O(1)*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int reverse_num(int n) {
        int reversed = 0;
        while (n != 0) {
            int remainder = n % 10;
            reversed = reversed * 10 + remainder;
            n = n / 10;
        }
        return reversed;
    }
};

int main() {
    Solution ob;
    int n = 53941;
    int result = ob.reverse_num(n);
    cout << "Original no.: " << n << endl;
    cout << "Reversed number: " << result << endl;
    return 0; 
}