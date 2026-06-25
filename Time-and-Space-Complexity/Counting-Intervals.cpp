#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    while (Q--) {
        int T;
        long long L, R;
        cin >> T >> L >> R;

        if (L > R) {
            cout << 0 << '\n';
            continue;
        }

        long long ans;

        if (T == 1) {
            ans = max(0LL, R - L - 1);
        }
        else if (T == 2 || T == 3) {
            ans = max(0LL, R - L);
        }
        else { // T == 4
            ans = R - L + 1;
        }

        cout << ans << '\n';
    }

    return 0;
}