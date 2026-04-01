// Example 1:
// Input:N = 153
// Output:True
// Explanation: 1^3+5^3+3^3 = 1 + 125 + 27 = 153
                                        
// Example 2:
// Input:N = 371                
// Output: True
// Explanation: 3^3+7^3+1^3 = 27 + 343 + 1 = 371
       
/*Time complexity = O((logN)^2)
  Space complexity = O(1)*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int power (int base, int n) {
        if (n == 0) return 1;
        return base * power(base, n-1);
    }

    int no_of_digits(int n ) {
        int count = 0;
        while (n != 0) {
            count++;
            n = n/ 10;
        }
        return count;
    }
    bool isArmstrong (int n) {
        int arm = 0, org_num = n, count = no_of_digits(n);
        while (n != 0) {
            int rem = n % 10;
            arm += power(rem, count);
            n = n / 10;
        }
        if (arm == org_num) return true;
        return false;
    }

};
// Optimal solution: 
class Armstrong {
    public:
        static bool isArm (int num) {
            int k = to_string(num).length(); // get no. of digits.
            int sum = 0;
            int n = num;

            while (n != 0) {
                int rem = n % 10;
                sum += pow(rem, k);
                n /= 10;
            }
            return sum == num;
        }
};

int main() {
    Solution ob;
    Armstrong ar;
    int n = 154;
    if (ob.isArmstrong(n)) {
        cout << n << " is a armstrong!" << endl;
    }
    else {
        cout << n << " is not a armstrong!" << endl;
    }

    if (Armstrong::isArm(n)) {
        cout << n << " is a armstrong!" << endl;
    }
    else {
        cout << n << " is not a armstrong!" << endl;
    }
    return 0;
}