// Example 1:
// Input:N = 4554
// Output:Palindrome Number
// Explanation: The reverse of 4554 is 4554 and therefore it is palindrome number
                                        
// Example 2:
// Input:N = 7789          
// Output: Not Palindrome
// Explanation: The reverse of number 7789 is 9877 and therefore it is not palindrome

/*Time complexity = O(logN)
  Space complexity = O(1)*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool isPalindrome (int n) {
        int original_no = n;
        int reversed = 0;
        while (n != 0) {
            int remainder = n % 10;
            reversed = reversed * 10 + remainder;
            n = n / 10;
        }
        if (reversed == original_no) return true;
        return false;
    }
};

int main() {
    Solution ob;
    int n = 45544;
    if (ob.isPalindrome(n)) {
        cout << n << " is a palindrome!" << endl;
    }
    else {
        cout << n << " is not a palindrome!" << endl;
    }
    return 0;
}

