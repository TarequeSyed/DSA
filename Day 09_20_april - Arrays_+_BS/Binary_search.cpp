// Iterative approach: 

// for both: 
/*Time Complexity
Space Complexity: 0(1) */

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
       int binarySearch(vector<int>& arr, int target) {
            int n = arr.size();
            int start = 0, end = n - 1;
            
            while (start <= end) {
                int mid = start + ((end - start) / 2);
                if (arr[mid] == target) return mid;
                else if (arr[mid] < target) {
                    start = mid + 1;
                }
                else {
                    end = mid - 1;
                }
            }
            return -1;
       }

       int binSearch_recursive (vector<int>& arr, int start, int end, int target) {
            // base case: 
            if (start > end) return -1;
        
            int mid = start + ((end - start) / 2) ;
            if (arr[mid] == target) return mid;
            else if (arr[mid] < target) {
                return binSearch_recursive(arr, mid+1, end, target);
            }
            else {
                return binSearch_recursive(arr, start, mid-1, target);
            }
       }

       // you can either initiate search using function or on main function as well:
       int ini_bin_search(vector<int>& arr, int target) {
            return binSearch_recursive(arr, 0, arr.size()-1, target);
       }
};



int main()
{
    vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17}; // sorted array
    int target = 6; // target element to search

    Solution obj; // Create object of Solution class
    int res = obj.binarySearch(a, target);
    int rec_res = obj.ini_bin_search(a, target);

    if (res == -1) cout << "The target is not present." << endl;
    else cout << "The target is at index: " << res << endl;

    if (rec_res == -1) cout << "The target is not there. " << endl;
    else cout << "The target is at index: " << rec_res << endl;
    return 0;
}

