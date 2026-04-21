#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        long long h;
        cin >> n >> m >> h;

        vector<long long> base(n);
        for (int i = 0; i < n; i++) cin >> base[i];

        vector<long long> add(n, 0);
        vector<int> seen(n, -1);
        int resetTime = 0;

        while (m--) {
            int b;
            long long c;
            cin >> b >> c;
            --b;

            if (seen[b] != resetTime) {
                seen[b] = resetTime;
                add[b] = 0;
            }

            add[b] += c;

            if (base[b] + add[b] > h) {
                resetTime++;
            }
        }

        for (int i = 0; i < n; i++) {
            if (seen[i] != resetTime) cout << base[i] << " ";
            else cout << base[i] + add[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
