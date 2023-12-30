#include <bits/stdc++.h>
using namespace std;

#define int long long int
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
    int n;
    cin>>n;
    int a[n];
    int total=0;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=a[i];
        if(a[i]%2)
        {
            cnt++;
        }
        int ans=sum-(cnt/3);
        if(i==0)
        {
            cout<<a[i]<<" ";
            continue;
        }

        cout<<ans-(ans%2)<<" ";
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
