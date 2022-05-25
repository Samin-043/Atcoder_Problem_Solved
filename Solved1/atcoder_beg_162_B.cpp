#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    ll ans;
    ans=(n*(n+1))/2;
    for(int i=1;i<=n;i++)
    {
        if(i%3==0&&i%5==0)
        {
            ans=ans-i;
        }
        else if(i%3==0||i%5==0)
        {
            ans=ans-i;
        }
    }
    cout<<ans<<endl;
    return 0;

}
