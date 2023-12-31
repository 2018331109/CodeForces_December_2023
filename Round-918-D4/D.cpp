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
    string s;
    cin>>s;
    vector<char>ans;
    set<char>v, c;
    v.insert('a'), v.insert('e');
    c.insert('b'), c.insert('c'), c.insert('d');
    string ss;
    for(int i=0; i<n; i++)
    {
        if(c.find(s[i]) != c.end())
        {
            ss+='c';
        }
        else
        {
            ss+='v';

        }
    }

    for(int i=0; i<n;)
    {
        string a;
        a.push_back(ss[i]);
        a.push_back(ss[i+1]);


        if(i+2==n-1)
        {
            ans.pb('.');
            ans.pb(s[i]);
            ans.pb(s[i+1]);
            ans.pb(s[i+2]);
            i+=3;
        }
        else if(i+1==n-1)
        {
            ans.pb('.');
            ans.pb(s[i]);
            ans.pb(s[i+1]);
            i+=2;
        }
        else
        {
            string b;
            b.push_back(ss[i+2]);
            b.push_back(ss[i+3]);

            if(b=="cv")
            {
                ans.pb('.');
                ans.pb(s[i]);
                ans.pb(s[i+1]);
                i+=2;
            }
            else
            {
                ans.pb('.');
                ans.pb(s[i]);
                ans.pb(s[i+1]);
                ans.pb(s[i+2]);
                i+=3;
            }
        }
    }

    for(int i=1;i<ans.size();i++)
    {
        cout<<ans[i];
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
