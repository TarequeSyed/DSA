#include <bits/stdc++.h>
using namespace std;

// we will solve it using the 2 pointers
bool isPalindrome (string &s) {
    int start = 0, end = s.size() - 1;
    while (start < end) {
        for (char ch: s) {
            ch = tolower(ch);
        }
        if (s[start++] != s[end--]) return false;
    }
    return true;
}

int main() {
    string s = "Racecar";
    if (isPalindrome(s)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}