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
    int a, b, xk, yk, xq, yq;
    cin>>a>>b>>xk>>yk>>xq>>yq;

    vector<int>dx= {-a, -a, a, a, -b, -b, b, b};
    vector<int>dy= {b, -b, b, -b, a, -a, a, -a};

    set<pair<int, int>>dk, dq;

    for(int i=0; i<8; i++)
    {
        dk.insert({xk+dx[i], yk+dy[i]});
    }

    for(int i=0; i<8; i++)
    {
        dq.insert({xq+dx[i], yq+dy[i]});
    }

    int ans=0;

    for(auto it:dk)
    {
        if(dq.find(it) != dq.end())
        {
            ans++;
        }
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
