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
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int sum=0;
    int cnt=0;
    int total=0;
    for(int i=n-1; i>=0; i--)
    {
        if(total>0)
        {
            v.pb(sum);
            sum=0;
        }
        sum+=a[i];
        total+=a[i];
    }
    v.pb(sum);
    int ans=0;
    int k=v.size();
//    for(auto it:v)
//    {
//        cout<<it<<" ";
//    }
//    cout<<endl;
    for(int i=0;i<k;i++)
    {
        ans+=(v[i]*(k-i));
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

