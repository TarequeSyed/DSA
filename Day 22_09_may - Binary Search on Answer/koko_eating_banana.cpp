/*Koko Eating Bananas

Problem Statement: A monkey Koko is given ‘n’ piles of bananas, whereas the 'ith' pile has ‘a[i]’ bananas. 
An integer ‘h’ is also given, which denotes the time (in hours) for all the bananas to be eaten.
Each hour, the monkey chooses a non-empty pile of bananas and eats ‘k’ bananas. 
If the pile contains less than ‘k’ bananas, then the monkey consumes all the bananas and won’t eat any more bananas in that hour.
Find the minimum number of bananas ‘k’ to eat per hour so that the monkey can eat all the bananas within ‘h’ hours.

Examples
Input: N = 4, a[] = {7, 15, 6, 3}, h = 8
Output: 5
Explanation:  If Koko eats 5 bananas/hr, he will take 2, 3, 2, and 1 hour to eat the piles accordingly. So, he will take 8 hours to complete all the piles.  
Input: N = 5, a[] = {25, 12, 8, 14, 19}, h = 5
Output: 25
Explanation: If Koko eats 25 bananas/hr, he will take 1, 1, 1, 1, and 1 hour to eat the piles accordingly. */

#include <bits/stdc++.h>
using namespace std;


int koko_eating (vector<int>& arr, int hours) {
    int max_el = *max_element(arr.begin(), arr.end());
    int start = 1, end = max_el;
    int ans = max_el;
    while (start <= end) {
        int mid = start + (end-start)/2;
        int sum = 0;
        for (int i : arr) {
            sum += (i + mid - 1) / mid;
        }

        
        if (sum <= hours) {
            ans = mid;
            end = mid - 1;
        }

        else {
            start = mid + 1;
        }
    
    }
    return ans;
}

int main () {
    
    vector<int> a = {7, 15, 6, 3};
    int h = 8;

    int res = koko_eating(a, h);

    cout << "min bananas to eat : " << res << endl;

    return 0;
}