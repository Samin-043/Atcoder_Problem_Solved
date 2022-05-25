#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll INF = 1e18;
//ll num=1000000000000000000;
int main()
{
    ll n,mul=1;
    vector<ll>v;
    cin>>n;
    int f=0;
    for(ll i=0; i<n; i++)
    {
        ll va;
        cin>>va;
        v.push_back(va);

    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]==0)
        {
            mul=0;
            break;
        }
        mul*=v[i];
        if(mul>INF)
        {
            f=1;
            break;
        }
    }
    cout<<mul<<endl;
    if(f==1)
    {
        cout<<"-1";
    }
    else
    {
        cout<<mul;
    }
    cout<<endl;
    return 0;
}
