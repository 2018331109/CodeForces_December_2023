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
    string s;
    cin>>s;
    int n=s.length();

    string a;
    a+=s[0];
    int i=1;
    while(s[i]=='0' && i<n)
    {
        a+=s[i];
        i++;
    }

    if(i==n)
    {
        neg;
        return;
    }

    string b;
    while(i<n)
    {
        b+=s[i];
        i++;
    }

    if(a.length()>b.length())
    {
        neg;
    }
    else if(a.length()<b.length())
    {
        cout<<a<<" "<<b<<endl;
    }
    else
    {
        if(a>b)
        {
            neg;
        }
        else if(a<b)
        {
            cout<<a<<" "<<b<<endl;
        }

        else
        {
            neg;
        }
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

