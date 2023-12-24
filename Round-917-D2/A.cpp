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
    int o=0, e=0, z=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x>0)
        {
            o++;
        }
        if(x<0)
        {
            e++;
        }
        if(x==0)
        {
            z++;
        }
    }

    if(z)
    {
        cout<<0<<endl;
        return;
    }
    if(e%2)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<1<<endl;
        cout<<1<<" "<<0<<endl;
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

