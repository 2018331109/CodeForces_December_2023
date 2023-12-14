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
    int n, m, k;
    cin>>n>>m>>k;
    int mat[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>mat[i][j];
        }
    }

    cout<<(m*(m-1))/2<<endl;

    if(k==0)
    {
        for(int i=1; i<m; i++)
        {
            for(int j=i+1; j<=m; j++)
            {
                cout<<i<<" "<<j<<endl;
            }
        }
    }
    else
    {

        for(int i=m; i>1; i--)
        {
            for(int j=i-1; j>=1; j--)
            {
                cout<<i<<" "<<j<<endl;
            }
        }

    }
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
