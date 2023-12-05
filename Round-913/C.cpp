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
    cin>>n;
    string s;
    cin>>s;
    map<char, int>mp;
    int ans=0;
    for(int i=0; i<n; i++)
    {
        mp[s[i]]++;
        ans=max(ans, mp[s[i]]);
    }
    if(ans>(n-ans))
    {
        cout<<ans-(n-ans)<<endl;
    }
    else
    {
        cout<<n%2<<endl;
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

