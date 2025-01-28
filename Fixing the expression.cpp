#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        string a; cin>>a;
        if(a[0] < a[2])
        {
            if(a[1] == '<') cout<<a<<endl;
            else cout<<a[0]<<"<"<<a[2]<<endl;
        }
        else if(a[0] == a[2])
        {
            if(a[1] == '=') cout<<a<<endl;
            else cout<<a[0]<<"="<<a[2]<<endl;
        }
        else
        {
            if(a[1] == '>') cout<<a<<endl;
            else cout<<a[0]<<">"<<a[2]<<endl;
        }
    }
    return 0;
}
