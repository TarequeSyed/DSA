/*Peak element in Array: to_do (to do)

Problem Statement: Given an array of length N, peak element is defined as the element greater than both of its neighbors. 
Formally, if arr[i] is the peak element, arr[i - 1] < arr[i] and arr[i + 1] < arr[i]. 
Find the index(0-based) of a peak element in the array. If there are multiple peak numbers, return the index of any peak number.

Examples:
Input: arr[] = {1,2,1,3,5,6,4} 
Output: 1 
Explanation : There are 2 peak numbers that are at indices 1 and 5. We can return any of them.*/

#include <bits/stdc++.h>
using namespace std;

vector<int> peak_brute (vector<int>& arr) {
    vector<int> ans;
    for (int i = 1; i < arr.size() - 1; i++) {
        if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
            ans.push_back(i);
            
        }
    }
    return ans;
}

int main () {
    

   vector<int> arr= {1,2,3,4,5,6,7,8,5,1};
   vector <int> res = peak_brute(arr);
   
   for (int x : res) {
        cout << x << " "; 
   }

    return 0;
}