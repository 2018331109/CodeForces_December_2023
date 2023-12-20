#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back

int mod = 1e9 + 7;
int md = 998244353;
const int INF = 1e18;


void solve()
{
    map<int, int>mp;

    for(int i=0; i<31; i++)
    {
        mp[i]=0;
    }
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int q, x;
        cin>>q>>x;
        if(q==1)
        {
            mp[x]++;
        }

        else
        {
            vector<int>v;
            int cnt=0;
            while(x>0)
            {
                if(x%2)
                {
                    v.pb(cnt);
                }
                cnt++;
                x/=2;
            }

            reverse(v.begin(), v.end());
            map<int, int>demo=mp;

            for(auto it:v)
            {
                demo[it]-=1;
            }


//            for(int i=30; i>0; i--)
//            {
//                if(demo[i]>0)
//                {
//                    demo[i-1]+=demo[i]*2;
//                }
//            }
            for(int i=0; i<30; i++)
            {
                if(demo[i]>0)
                {
                    demo[i+1]+=demo[i]/2;
                }
            }

            int f=1;
            for(auto it:demo)
            {
                if(it.second<0)
                {
                    f=0;
                }
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

