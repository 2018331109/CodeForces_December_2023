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
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    sort(a, a + n, greater<int>());

    int mx = a[0];
    int gc = 0;
    for (int i = 0; i < n; ++i)
    {
        gc = gcd(gc, mx - a[i]);
    }

    int ans = 0;
    if (gc)
    {
        for (int i = 0; i < n; ++i)
        {
            ans += (mx - a[i]) / gc;
        }
    }

    int res = a[0];
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == res)
        {
            res -= gc;
        }
    }

    if (gc)
    {
        ans += (mx - res) / gc;
    }
    else
    {
        ans += 1;
    }

    cout << ans << endl;
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

