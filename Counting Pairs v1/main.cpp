#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    long long x, y;
    cin >> n >> x >> y;

    vector<long long> arr(n);
    long long total_sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total_sum += arr[i];
    }


    sort(arr.begin(), arr.end());

    int count = 0;
    int left = 0, right = n - 1;
      //cout<<"sum :"<<total_sum<<endl;
    while (left < n) {
            right = n - 1;
            while(right>left)
            {
                 long long remaining_sum = total_sum - (arr[left] + arr[right]);
                // cout<<remaining_sum<<endl;
                 if (remaining_sum >= x && remaining_sum <= y) {
                    count++;
                 }
                 right--;
            }


        /**< if (remaining_sum >= x && remaining_sum <= y) {
            count++;
            left++;
            right--;
        } else if (remaining_sum < x) {
            right--;
        } else {
            left++;
        } */
        left++;
    }

    cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
