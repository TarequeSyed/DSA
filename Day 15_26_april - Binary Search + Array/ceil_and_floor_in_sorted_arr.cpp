/*Floor and Ceil in Sorted Array

Problem Statement: ou're given an sorted array arr of n integers and an integer x. 
Find the floor and ceiling of x in arr[0..n-1]. 
The floor of x is the largest element in the array which is smaller than or equal to x. 
The ceiling of x is the smallest element in the array greater than or equal to x

Examples:

Example 1:
Input Format: n = 6, arr[] ={3, 4, 4, 7, 8, 10}, x= 5
Result: 4 7
Explanation: The floor of 5 in the array is 4, and the ceiling of 5 in the array is 7.*/

// we will use binary search algorithm here: 

/*Time Complexity:O(logN),
Space Complexity: O(1)*/
#include <bits/stdc++.h>
using namespace std;

vector<int> ceil_and_floor (vector<int>& arr, int target) {
    int n = arr.size();
    int start = 0, end = n - 1;
    int ans_ceil = -1, ans_floor = -1;

    // for ceil:
    while (start <= end) {
        int mid = start + ((end - start) / 2);
        if (arr[mid] >= target) {
            ans_ceil = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    // for floor: 
    start = 0, end = n-1;
    while (start <= end) {
        int mid = start + ((end - start)/2);
        if (arr[mid] <= target) {
            ans_floor = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return {arr[ans_floor], arr[ans_ceil]};
}

int main () {
    
    vector<int> arr ={3, 4, 4, 7, 8, 10};
    int x= 5;
    vector<int> res = ceil_and_floor(arr, x);
    cout << "The floor and ceil of " << x << " in array is: " << endl;
    for (int x : res) {
        cout << x << " ";
    }

    return 0;
}