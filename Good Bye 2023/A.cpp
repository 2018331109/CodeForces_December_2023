#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define neg cout<<-1<<endl;
#define fs first
#define sc second

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;

void solve()
{
    int n, k;
    cin>>n>>k;
    int a=1;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        a*=x;
    }
    if(2023%a)
    {
        no;
        return;
    }
    yes;
    cout<<2023/a<<" ";
    k--;
    while(k>0)
    {
        cout<<1<<" ";
        k--;
    }
    cout<<endl;
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
