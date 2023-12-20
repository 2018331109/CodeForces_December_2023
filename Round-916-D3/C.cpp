#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back

int mod = 1e9 + 7;
int md = 998244353;
const int INF = 1e18;


void solve()
{
    int n, k;
    cin>>n>>k;
    int a[n];
    int b[n];
    int c[n];
    int d[n];
    int total=0;
    int ans=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        total+=a[i];
        if(i==0)
        {
            d[i]=a[i];
        }
        else
        {
            d[i]=d[i-1]+a[i];
        }
    }

    for(int i=0; i<n; i++)
    {
        cin>>b[i];
        if(i==0)
        {
            c[i]=b[i];
        }
        else
        {
            c[i]=max(c[i-1], b[i]);
        }
    }
    for(int i=min(n, k)-1; i>=0; i--)
    {
        int now=d[i];
        now+=(k-i-1)*c[i];
        ans=max(ans, now);
    }

    cout<<ans<<endl;
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

