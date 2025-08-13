#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n;
    cin >> n;
    int scr = 0;
    int tmp;
    for (int i=0; i<n; i++){
        cin >> tmp;
        if(tmp==0){
            scr++;
        }else
            scr+=tmp;
    }
    cout << scr << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
