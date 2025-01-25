#include <bits/stdc++.h>
using namespace std;
#define ll long long int

map<int, bool> visited;
bool ifVisited(ll n, ll m){
    visited[n] = true;
    if(n==m){
        return true;
    }
    if(n%3!=0){
        return false;
    }
    return (ifVisited(n/3LL,m) or ifVisited(2LL*(n/3LL),m));
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;

        if(ifVisited(n,m)){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
}
