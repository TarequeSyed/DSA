#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++) {
        if (arr[i] < 0) arr[i] = 2;
        else if (arr[i] > 0) arr[i] = 1;
        else arr[i] = 0;
    }

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}