#include <bits/stdc++.h>
using namespace std;

#define fastIO


void Permutation(){
    int n;
    cin >> n;
    int x = n/2;
    int sum = x*(2*n-2-(x-1)*2);
    int ans = sum/2 + 1;
    cout << ans << endl;
}

int32_t main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout.precision(numeric_limits<double>::max_digits10);

    int t=1;
    cin >> t;
    while (t--){
        Permutation();
    }
    return 0;
}
