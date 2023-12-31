#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define neg cout<<-1<<endl;

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;


void solve()
{
    int n;
    cin>>n;
    int a[n];
    int f=0;
    set<int>st;
    int total=0;
    st.insert(0);
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(i%2==0)
        {
            total+=x;
        }
        else
        {
            total-=x;
        }
        if(st.find(total) != st.end())
        {
            f=1;
        }
        st.insert(total);
    }

    if(f)
    {
        yes;
    }
    else
    {
        no;
    }
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
