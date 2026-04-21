#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long L = 0, R = 1e9;

        for (int i = 0; i + 1 < n; i++) {
            if (a[i] < a[i + 1]) {
                long long mid = (a[i] + a[i + 1]) / 2;
                R = min(R, mid);
            }
            else if (a[i] > a[i + 1]) {
                long long mid = (a[i] + a[i + 1] + 1) / 2;
                L = max(L, mid);
            }
        }

        if (L > R) cout << -1 << "\n";
        else cout << L << "\n";
    }
    return 0;
}
