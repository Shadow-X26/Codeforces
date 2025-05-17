#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    vector <int> a(t+1);
    for (int i=1; i<=t; i++){
        cin >> a[i];
    }

    int days = 0;
    int i = 1;

    while(i<=t){
        int max_page = a[i];
        int j=i;

        while(j<=max_page){
            max_page = max(max_page,a[j]);
            ++j;
        }

        ++days;
        i=j;
    }
    cout << days << endl;
}
