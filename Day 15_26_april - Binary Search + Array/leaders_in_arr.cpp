/*Leaders in an Array


Examples
Example 1:
Input:
 arr = [4, 7, 1, 0]  
Output:
 7 1 0  
Explanation:
 The rightmost element (0) is always a leader.  
7 and 1 are greater than the elements to their right, making them leaders as well.

Example 2:
Input:
 arr = [10, 22, 12, 3, 0, 6]  
Output:
 22 12 6  
Explanation:
 6 is a leader because there are no elements after it.  
12 is greater than all the elements to its right (3, 0, 6), and 22 is greater than 12, 3, 0, 6, making them leaders as well. */

#include <bits/stdc++.h>
using namespace std;

// using brute: 

vector<int> leaders_in_arr_brute (vector<int>& arr) {
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i+1; j < arr.size(); j++) {
            if (arr[j] < arr[i]) {
                ans.push_back(arr[i]);
            }
        }
    }
    ans.push_back(arr[arr.size()-1]);
    return ans;
}

int main () {
    
    vector<int> arr = {10, 22, 12, 3, 0, 6};
    vector<int> res = leaders_in_arr_brute(arr);
    
    cout << "The leaders of the arr is: " << endl;
    for (int x : res) {
        cout << x << " ";
    }

    return 0;
}