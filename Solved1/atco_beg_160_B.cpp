#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll taka;
    cin>>taka;
    ll ans,d;
    ans=0;
    d=taka/500;
    ans+=d*1000;
    taka=taka-d*500;
    if(taka>4)
    {
        d=taka/5;
        ans+=d*5;
    }
    cout<<ans<<endl;
}
