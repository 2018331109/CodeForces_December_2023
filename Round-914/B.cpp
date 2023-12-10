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
    vector<pair<int, int>>v(n);
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v[i].first=x;
        v[i].second=i;
    }

    sort(v.begin(), v.end());

//    for(auto it:v)
//    {
//        cout<<it.first<<" "<<it.second<<endl;
//    }

    int cnt=0;
    int sum=0;

    vector<int>ans(n, -1);
    int last=0;
    for(int i=0; i<n; i++)
    {
        sum+=v[i].first;
        if(i+1<n && sum<v[i+1].first)
        {
            ans[v[i].second]=cnt;
            while(last<i)
            {
                ans[v[last].second]=cnt;
                last++;
            }
            last++;
        }
        cnt++;
    }
    ans[v[n-1].second]=cnt-1;

    while(last<n)
    {
        ans[v[last].second]=cnt-1;
        last++;
    }

//    for(int i=n-2; i>=0; i--)
//    {
//        if(ans[i]==0)
//        {
//            ans[i]=ans[i+1];
//        }
//
//    }

    for(auto it:ans)
    {
        cout<<it<<" ";
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

