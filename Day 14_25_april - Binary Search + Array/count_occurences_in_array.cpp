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

// Not optimal. Worst case: Time: O(N).
// used -> two-pointer expansion” or “amortized linear scan (heard it first time);
int count_occ (vector<int>& arr, int target) {
        int n = arr.size();
        int start = 0, end = n - 1, count = 0;

        while (start <= end) {
            int mid = start + ((end-start)/2);
            if (arr[mid] == target) {
                count++;
                int left = mid - 1;
                while (left >= start && arr[left] == target) {
                    count++;
                    left--;
                }
                int right = mid + 1;
                while (right <= end && arr[right] == target) {
                    count++;
                    right++;
                }
                break;
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

// optimal aka old fashioned way: 
/*Time: O(log(N)),
  Space: O(1)*/

int count_occ_optimal (vector<int>& arr, int target) {
    int n = arr.size();
    int start = 0, end = n - 1, count = 0;
    int ans_first = -1, ans_last = -1;
    // for first occurence:
    while (start <= end) {
        int mid = start + ((end - start)/ 2);
        if (arr[mid] == target) {
            ans_first = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    // for last occurence:
    start = 0, end = n - 1;
    while (start <= end) {
        int mid = start + ((end - start)/2);
        if (arr[mid] == target) {
            ans_last = mid;
            start = mid + 1;
        }
        else if (arr[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    // edge case: if first_occ is not there, ans_first should be -1 and count returned must be '0'.
    if (ans_first == -1) return 0;
    return (ans_last - ans_first + 1);
}

int main () {

    vector<int> arr = {2, 2 , 3 , 3 , 3 , 3 , 4};
    int x = 3;
    int res = count_occ(arr, x);
    cout << "Total occurences of " << x << " is: " << res << endl;

    int resu = count_occ_optimal(arr, x);
    cout << "Total occurences of " << x << " is (using optimal): " << resu << endl;
    return 0;
}