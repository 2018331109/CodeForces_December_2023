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
    int n, m;
    cin>>n>>m;

    string s;
    cin>>s;

    vector<int>v;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            v.pb(i);
        }
    }

//    for(auto it:v)
//    {
//        cout<<it<<" ";
//    }
//    cout<<endl;

    if(v.size()==0)
    {

        cout<<s<<endl;
        return;
    }

    for(int i=1; i<v.size(); i++)
    {
        int left=v[i-1]+1;
        int right=v[i]-1;
        int cnt=0;
        while(right-left>=1 && cnt<m)
        {
            s[left]='1';
            s[right]='1';
            left++, right--;
            cnt++;
        }

    }
    int i=v[0]-1, cnt=0;
    while(i>=0 && cnt<m)
    {
        s[i]='1';
        i--;
        cnt++;
    }
    i=v[v.size()-1]+1;
    cnt=0;
    while(cnt<m && i<n)
    {
        s[i]='1';
        i++;
        cnt++;
    }
    cout<<s<<endl;

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
