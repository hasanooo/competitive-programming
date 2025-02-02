#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int m;
    cin >> m;
    vector<int> arr(m);

    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m - 1; i++) {
        int small = min(arr[i], arr[i + 1]);
        arr[i] -= small;
        arr[i + 1] -= small;
    }


    for (int i = 0; i < m - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
    return 0;
}
