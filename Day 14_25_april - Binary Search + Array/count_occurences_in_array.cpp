/*Problem Statement: You are given a sorted array containing N integers and a number X, 
you have to find the occurrences of X in the given array.

Example 1:
Input:
 N = 7,  X = 3 , array[] = {2, 2 , 3 , 3 , 3 , 3 , 4}
Output: 4*/

#include <bits/stdc++.h>
using namespace std;

// we will do using binary search (optimal method).
// brute method is linear search and count the occurences.

int count_occ (vector<int>& arr, int target) {
    int n = arr.size();
    int start = 0, end = n - 1, count = 0;
    while (start <= end) {
        int mid = start + ((end - start) / 2);
        if (arr[mid] == target) {
            count++;
        }
        else if (arr[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return count;
}

int main () {

    vector<int> arr = {2, 2 , 3 , 3 , 3 , 3 , 4};
    int x = 3;
    int res = count_occ(arr, x);
    cout << "Total occurences of " << x << " is: " << res << endl;

    return 0;
}