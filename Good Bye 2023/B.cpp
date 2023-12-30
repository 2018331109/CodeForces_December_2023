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

    int aa, bb;
    cin>>aa>>bb;

    int gc=__gcd(aa, bb);
    int a=min(aa, bb);
    int b=max(aa, bb);
    if(a==1)
    {
        cout<<b*b<<endl;
        return;
    }

    int l=a/gc;
    aa=l*a, bb=l*b;
    int ans=INF;
    if(aa%a==0 && aa%b==0 && aa!=b && aa!=a)
    {
        //cout<<aa<<endl;
        ans=min(ans, aa);
        //return;
    }
    else if(bb%a==0 && bb%b==0 && bb!=b && bb!=b)
    {
        //cout<<bb<<endl;
        ans=min(ans, bb);
        //return;

    }

    l=b/gc;
    aa=l*a, bb=l*b;
    if(aa%a==0 && aa%b==0 && aa!=b && aa!=a)
    {
        //cout<<aa<<endl;
        ans=min(ans, aa);
    }
    else if(bb%a==0 && bb%b==0 && bb!=b && bb!=b)
    {
        //cout<<bb<<endl;
        ans=min(ans, bb);
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
