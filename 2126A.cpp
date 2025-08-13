#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        set<char> digits;
        string sx = to_string(x);
        for (char ch : sx) digits.insert(ch);
        for (int y = 0; ; y++) {
            string sy = to_string(y);
            for (char ch : sy) {
                if (digits.count(ch)) {
                    cout << y << endl;
                    goto next;
                }
            }
        }
        next:;
    }
    return 0;
}
