#include <bits/stdc++.h>
using namespace std;

void freq (vector<int>& arr) {
    int n = arr.size();

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }
    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;

    for (auto& it: mp) {
        int element = it.first;
        int count = it.second;

        if (count < minFreq) {
            minFreq = count;
            minEle = element;
        }
    }
}

int main () {
    


    return 0;
}