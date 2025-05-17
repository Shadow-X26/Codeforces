#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll k;
        cin >> k;
        cout << k + (ll)(sqrtl(k) + 0.5) << endl;
    }
    return 0;
}
