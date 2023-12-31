#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define pb push_back
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define neg cout<<-1<<endl;

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;


void solve()
{
    string s;
    char ch;
    for(int j=0; j<3; j++)
    {
        string s;
        cin>>s;
        int f=0;
        int a=0, b=0, c=0;
        for(int i=0; i<3; i++)
        {
            if(s[i]=='A')
            {
                a++;
            }
            if(s[i]=='B')
            {
                b++;
            }
            if(s[i]=='C')
            {
                c++;
            }
        }
        if(a==0)
        {
            ch='A';
        }
        if(b==0)
        {
            ch='B';
        }
        if(c==0)
        {
            ch='C';
        }
    }

    cout<<ch<<endl;

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
