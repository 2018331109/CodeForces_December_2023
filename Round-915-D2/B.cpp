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
    map<int, int>mp;
    int n;
    cin>>n;
    for(int i=1; i<n; i++)
    {
        int x, y;
        cin>>x>>y;
        mp[x]++;
        mp[y]++;

    }
    int ans=0;
    for(auto it:mp)
    {
        if(it.second==1)
        {
            ans++;
        }
    }

    cout<<(ans+1)/2<<endl;
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

