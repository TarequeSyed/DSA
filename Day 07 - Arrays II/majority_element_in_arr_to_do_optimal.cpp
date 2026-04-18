/* Find the Majority Element that occurs more than N/2 times
Input:
 nums = [7, 0, 0, 1, 7, 7, 2, 7, 7]  
Output:
 7  */
 
#include <bits/stdc++.h>
using namespace std;

/*Time Complexity: O(N)

Space Complexity: O(N*/
// What i did is better approach.
// optimal approach is time: O(N) and space: O(1)
vector<int> max_count (vector<int>& arr) {
    unordered_map<int, int> mp;
    for (int x : arr) {
        mp[x]++;
    }
    for(auto& it : mp) {
        if (it.second > (arr.size() / 2)) {
            return {it.first, it.second};
        }
    }
    return {-1, -1};
}

int optimal_max_count (vector<int>& arr) {
    int count = 0, element = arr[0];
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == element) {
            count++;
        }
        else {
            count--;
        }
        if (count == 0) {
            element = arr[i];
        }
    }
}
int main () {
        
    vector<int> nums = {7, 0, 0, 1, 7, 7, 2, 7, 7};
    vector<int> res = max_count(nums);
    
    cout << "The majority occuring number is: " << res[0] << endl;
    cout << "The no. of times it apperared: " << res[1] << endl;
    return 0;
}