#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define pb push_back

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;



void solve()
{
    int n;

    cin>>n;
    int l=0, r=0, u=0, d=0;
    for(int i=0; i<n; i++)
    {
        int a, b;
        cin>>a>>b;
        if(a<0)
        {
            l=1;
        }
        if(a>0)
        {
            r=1;
        }
        if(b>0)
        {
            u=1;
        }
        if(b<0)
        {
            d=1;
        }
    }
    int total=l+r+u+d;
    if(total==4)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

