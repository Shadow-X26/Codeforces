#include <iostream>
typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k;
        string s;
        cin >> n >> k >> s;
        ll c0=0,c1=0;
        for(auto z: s){
            if(z=='0'){
                c0++;
            }else{
                c1++;
            }
        }

        ll d = abs(c0-c1)/2;
        if(k<d){
            cout << "NO" << endl;
        }else if((k-d)%2==0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }


}
