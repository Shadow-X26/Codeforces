#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> f;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            f[a[i]]++;
        }

        int score = 0;
        for (auto& pair : f) {
            score += pair.second / 2;
        }

        cout << score << endl;
    }

    return 0;
}
