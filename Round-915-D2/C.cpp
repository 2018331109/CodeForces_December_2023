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
    string s;
    cin>>s;
    string srs=s;
    sort(srs.begin(), srs.end());
    map<char, int>mp;
    string mm="";
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
        if(s[i]!=srs[i])
        {
            mm+=s[i];
        }
    }

    string nn;
    char cur=s[n-1];
    nn+=cur;
    for(int i=n-2;i>=0;i--)
    {
        if(s[i]>=cur)
        {
            nn+=s[i];
            cur=s[i];
        }
    }

    reverse(nn.begin(), nn.end());


    int i=0;
    int j=0;

    //cout<<nn<<" "<<mm<<endl;

    while(i<mm.size() && j<nn.size())
    {
        if(nn[j]==mm[i])
        {
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }

    if(i==mm.size())
    {
        //cout<<"yes"<<endl;

        cout<<nn.size()-mp[nn[0]]<<endl;

    }
    else
    {
        //cout<<"no"<<endl;
        neg;
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

