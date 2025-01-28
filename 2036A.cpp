#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

string isPerfectMelody(const vector<int>& melody) {
    int n = melody.size();
    for (int i = 0; i < n - 1; ++i) {
        int interval = abs(melody[i] - melody[i + 1]);
        if (interval != 5 && interval != 7) {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> melody(n);
        for (int i = 0; i < n; ++i) {
            cin >> melody[i];
        }
        cout << isPerfectMelody(melody) << endl;
    }

    return 0;
}
