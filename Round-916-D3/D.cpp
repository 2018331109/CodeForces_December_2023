#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define sc second
#define fs first


int mod = 1e9 + 7;
int md = 998244353;
const int INF = 1e18;


void solve()
{
    int n;
    cin>>n;
    vector<pair<int, int>>a(n), b(n), c(n);

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        a[i]= {-x, i};
    }
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        b[i]= {-x, i};
    }
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        c[i]= {-x, i};
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    set<int>sl;
    int ans=0;
    int i=0;
    int ai=a[i].sc;
    int bi=b[i].sc;
    int ci=c[i].sc;
    if(a[0].sc!=b[1].sc && b[1].sc!=c[2].sc && c[2].sc!=a[0].sc)
    {
        ans=min(ans, a[0].fs+b[1].fs+c[2].fs);
    }
    if(b[0].sc!=a[1].sc && a[1].sc!=c[2].sc && c[2].sc!=b[0].sc)
    {
        ans=min(ans, b[0].fs+a[1].fs+c[2].fs);
    }
    if(b[0].sc!=c[1].sc && c[1].sc!=a[2].sc && a[2].sc!=b[0].sc)
    {
        ans=min(ans, b[0].fs+c[1].fs+a[2].fs);
    }
    if(c[0].sc!=b[1].sc && b[1].sc!=a[2].sc && a[2].sc!=c[0].sc)
    {
        ans=min(ans, c[0].fs+b[1].fs+a[2].fs);
    }

    if(a[0].sc !=b[1].sc && b[1].sc!=c[1].sc && c[1].sc!=a[0].sc)
    {
        ans=min(ans, a[0].fs+b[1].fs+c[1].fs);
    }
    if(b[0].sc !=a[1].sc && a[1].sc!=c[1].sc && c[1].sc!=b[0].sc)
    {
        ans=min(ans, b[0].fs+a[1].fs+c[1].fs);
    }
    if(c[0].sc !=a[1].sc && a[1].sc!=b[1].sc && b[1].sc!=c[0].sc)
    {
        ans=min(ans, c[0].fs+a[1].fs+b[1].fs);
    }

    if(a[0].sc!=b[0].sc && b[0].sc!=c[1].sc && c[1].sc!=a[0].sc)
    {
        //cout<<a[0].fs+b[0].fs+c[1].fs<<endl;
        ans=min(ans, a[0].fs+b[0].fs+c[1].fs);
    }
    if(b[0].sc!=c[0].sc && c[0].sc!=a[1].sc && a[1].sc!=b[0].sc)
    {
        ans=min(ans, b[0].fs+c[0].fs+a[1].fs);
    }
    if(a[0].sc!=c[0].sc && c[0].sc!=b[1].sc && b[1].sc!=a[0].sc)
    {
        ans=min(ans, a[0].fs+c[0].fs+b[1].fs);
    }
    if(a[0].sc!=b[0].sc && b[0].sc!=c[0].sc && c[0].sc!=a[0].sc)
    {
        ans=min(ans, a[0].fs+b[0].fs+c[0].fs);
    }


    if(a[0].sc!=c[1].sc && c[1].sc!=b[2].sc && b[2].sc!=a[0].sc)
    {
        ans=min(ans, a[0].fs+c[1].fs+b[2].fs);
    }
    if(c[0].sc!=a[1].sc && a[1].sc!=b[2].sc && b[2].sc!=c[0].sc)
    {
        ans=min(ans, c[0].fs+a[1].fs+b[2].fs);
    }


    if(a[0].sc!=b[0].sc && b[0].sc!=c[2].sc && c[2].sc!=a[0].sc)
    {

        ans=min(ans, a[0].fs+b[0].fs+c[2].fs);
    }
    if(b[0].sc!=c[0].sc && c[0].sc!=a[2].sc && a[2].sc!=b[0].sc)
    {
        ans=min(ans, b[0].fs+c[0].fs+a[2].fs);
    }
    if(a[0].sc!=c[0].sc && c[0].sc!=b[2].sc && b[2].sc!=a[0].sc)
    {
        ans=min(ans, a[0].fs+c[0].fs+b[2].fs);
    }





    cout<<abs(ans)<<endl;


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

