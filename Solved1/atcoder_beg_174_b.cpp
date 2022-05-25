#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,d;
    cin>>n>>d;
    ll z=n;
    ll c=0;
    while(n--)
    {
        ll x,y;
        cin>>x>>y;
        double ans=(x*x)+(y*y);
        ans=sqrt(ans);
        if(ans>d)
        {
            //cout<<ans<<endl;
            c++;
        }

    }
    cout<<abs(z-c)<<endl;
    return 0;
}
