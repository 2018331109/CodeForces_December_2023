#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define pb push_back

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;


void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    set<char>st;
    for(auto it:s)
    {
        st.insert(it);
        ans+=st.size();
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

