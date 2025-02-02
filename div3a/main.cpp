#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool possible = true;

        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {

                a[i + 1] -= (a[i] - a[i + 1]);


                if (a[i + 1] < 0) {
                    possible = false;
                    break;
                }
            }
        }

        cout << (possible ? "YES" : "NO") << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
