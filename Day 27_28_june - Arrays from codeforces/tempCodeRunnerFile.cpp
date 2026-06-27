#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++) {
        if (arr[i] <= 10) {
            cout << "A[{}] = " << i << arr[i];
        }
        cout << endl;
    }
    return 0;
}