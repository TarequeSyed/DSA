#include <bits/stdc++.h>
using namespace std;

int search (vector<int>& arr, int X) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == X) return i;
    }
    return -1;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, X;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cin >> X;

    int res = search(arr, X);
    cout << res << endl;
    
    return 0;
}