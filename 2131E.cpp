#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define int long long
#define endl "\n"

const int INF = 1e18;

void solve(istream &cin, ostream &cout) {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    bool is = true;
    if (a[n - 1] != b[n - 1]) is = false;

    for (int i = n - 2; i >= 0 && is; i--) {
        if (a[i] == b[i]) {
            continue;
        }
        else if ((a[i] ^ a[i + 1]) == b[i] || (a[i] ^ b[i + 1]) == b[i]) {
            continue;
        }
        else {
            is = false;
        }
    }

    cout << (is ? "YES" : "NO") << endl;
}

int32_t main() {
    IOS;
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // LOCAL

    int t;
    cin >> t;
    while (t--) {
        solve(cin, cout);
    }
    return 0;
}
