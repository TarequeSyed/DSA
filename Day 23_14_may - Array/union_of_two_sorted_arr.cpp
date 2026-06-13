/*Union of Two Sorted Arrays

Problem Statement: Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.
The union of two arrays can be defined as the common and distinct elements in the two arrays.
NOTE: Elements in the union should be in ascending order.

Examples:

Input:n = 5,m = 5 arr1[] = {1,2,3,4,5}  arr2[] = {2,3,4,4,5}
Output: {1,2,3,4,5}
Explanation: Common Elements in arr1 and arr2  are:  2,3,4,5
Distnict Elements in arr1 are : 1
Distnict Elemennts in arr2 are : No distinct elements.
Union of arr1 and arr2 is {1,2,3,4,5}*/


#include <bits/stdc++.h>
using namespace std;


/*Time Compleixty : O( (m+n)log(m+n) ) . Inserting a key in map takes logN times, where N is no of elements in map. At max map can store m+n elements 
{when there are no common elements and elements in arr,arr2 are distntict}. So Inserting m+n th element takes log(m+n) time.
 Upon approximation across insertion of all elements in worst it would take O((m+n)log(m+n) time.
Using HashMap also takes the same time, On average insertion in unordered_map takes O(1) time 
but sorting the union vector takes O((m+n)log(m+n))  time. Because at max union vector can have m+n elements.
Space Complexity : O(m+n) {If Space of Union ArrayList is considered} ,O(1) {If Space of union ArrayList is not considered}*/
vector<int> union_of_2_arr_brute (vector<int>& arr1, vector<int>& arr2) {
    int m = arr1.size(), n = arr2.size();
    vector<int> ans;
    map <int, int> freq;

    for (auto it: arr1) {
        freq[it]++;
    }
    for (auto i : arr2) {
        freq[i]++;
    }

    for (auto k : freq) {
       ans.push_back(k.first);
    }
    return ans;
}

vector<int> using_set (vector<int> ar1, vector<int> ar2) {
    set <int> st;

    for (int x : ar1) {
        st.insert(x);
    }

    for (int y : ar2) {
        st.insert(y);
    }

    // covert set into vector: 
    vector<int> ans (st.begin(), st.end());

    return ans;
}

vector<int> two_pointers_optimal(vector<int>& a1, vector<int>& a2) {
    // done, need revision: dnr
    int left = 0, right = 0;
    int m = a1.size(), n = a2.size();
    vector<int> ans;

    while (left < m && right < n) {

        if (a1[left] <= a2[right]) {

            if (ans.empty() || ans.back() != a1[left])
                ans.push_back(a1[left]);

            left++;
        }
        else {

            if (ans.empty() || ans.back() != a2[right])
                ans.push_back(a2[right]);

            right++;
        }
    }

    while (left < a1.size()) {
        if (ans.empty() || ans.back() != a1[left])
            ans.push_back(a1[left]);

        left++;
    }

    while (right < a2.size()) {
        if (ans.empty() || ans.back() != a2[right])
            ans.push_back(a2[right]);

        right++;
    }

    return ans;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> arr1 = {1,2,3,4,5}, arr2 = {2,3,4,4,5};
    vector<int> res = union_of_2_arr_brute(arr1, arr2);
    
    cout << "After the union of two sorted arrays: " << endl;
    for (int x : res) {
        cout << x << " "; 
    }

    vector<int> ans = two_pointers_optimal(arr1, arr2);
    cout << endl << "Optimal: " << endl;
    for (int y : ans) {
        cout << y << " ";
    }

    return 0;
}