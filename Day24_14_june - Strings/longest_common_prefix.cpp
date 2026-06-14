/*Longest Common Prefix

Problem Statement: Write a function to find the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string "".

Input:
 str = ["flower", "flow", "flight"]
Output:
 "fl"
Explanation:
 All strings in the array begin with the common prefix "fl".

Example 2
Input:
 str = ["apple", "banana", "grape", "mango"]
Output:
 ""
Explanation:
 None of the strings share a common starting sequence, so the result is an empty string.*/


/*
   flower
   flow
   flight*/


#include <bits/stdc++.h>
using namespace std;

string compare (string m, string n) {
    string an;
    for (int i = 0; i < min(m.size(), n.size()); i++) {
        if (m[i] == n[i]) an.push_back(m[i]);
        else break;
    }    

    return an;
}

string common_prefix (vector <string> &s) {
    
    sort (s.begin(), s.end());

    string ans = compare (s[0], s[s.size() - 1]);
    return ans;
}

int main () {
   
    vector<string> s = {"flower", "flow", "flight"};
    string res = common_prefix(s);

    cout << "common prefix: " << res << endl;
    
    common_prefix(s);

    return 0;
}