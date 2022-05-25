#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    else
    {
        return gcd(b%a,a);
    }
}

int main()
{
    int n,i,j,k;
    cin>>n;
    ll ans;
    ans=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            for(k=1;k<=n;k++)
            {
                ans+=gcd(i,gcd(j,k));
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}

