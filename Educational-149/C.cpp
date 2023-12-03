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
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    if (n==1)
    {
        cout<<1<<endl;
        return;
    }
    sort(a, a+n);
    vector<int>v;
    int f=0;
    int gc=0;
    for(int i=0; i<n-1; i++)
    {
        int vl=a[n-1]-a[i];
        v.pb(vl);

        gc=__gcd(gc, vl);

    }


    int k=v.size();
    k--;
    int ans=0;
    while(k>=0)
    {
        int cur=v[k]/gc;
        ans+=cur;
        k--;

    }
    int ins=a[n-1];

    for(int i=n-1; i>=0; i--)
    {
        if(ins==a[i])
        {
            ins-=gc;
        }
    }

    //cout<<ans<<" "<<ins<<endl;

    cout<<ans+(a[n-1]-ins)/gc<<endl;



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

