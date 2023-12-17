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
    int mat[n][2*k];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2*k; j++)
        {
            cin>>mat[i][j];
        }
    }

    int cnt=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2*k; j+=2)
        {
            cnt+=((mat[i][j]==1) || mat[i][j+1]==1);
        }
    }

    cout<<cnt<<endl;

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    //cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

