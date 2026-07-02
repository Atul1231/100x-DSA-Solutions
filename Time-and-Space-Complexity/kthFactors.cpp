#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    vector<long long> small, large;

    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            small.push_back(i);
            if (i != n / i) {
                large.push_back(n / i);
            }
        }
    }

    reverse(large.begin(), large.end());

    // merge both
    vector<long long> factors;
    factors.insert(factors.end(), small.begin(), small.end());
    factors.insert(factors.end(), large.begin(), large.end());

    if (k > factors.size()) {
        cout << -1;
    } else {
        cout << factors[k - 1];
    }

    return 0;
}