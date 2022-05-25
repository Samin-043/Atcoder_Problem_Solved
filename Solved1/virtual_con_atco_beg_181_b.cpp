#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll sum=0;
    while(n--)
    {
        ll a,b;
        cin>>a>>b;
        sum+=(b*(b+1))/2;
        a--;
        sum=sum-(a*(a+1))/2;
    }
    cout<<sum<<endl;
}
