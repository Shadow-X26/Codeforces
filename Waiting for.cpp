#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int waiting = 0;
    while (n--) {
        char type;
        int value;
        cin >> type >> value;

        if (type == 'P') {
            waiting += value;
        } else if (type == 'B') {
            if (value > waiting) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
            waiting = max(0, waiting - value);
        }
    }

    return 0;
}
