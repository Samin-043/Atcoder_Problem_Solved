#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll arr[10005];
    ll sum=0;
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum>n)
    {
        cout<<"-1";
    }
    else
    {
        cout<<n-sum;
    }
    cout<<endl;
    return 0;
}
